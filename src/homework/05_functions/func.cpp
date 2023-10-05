//add include statements
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//add function code here
double get_gc_content(string dna_sequence)
{
    int dna_length = dna_sequence.length(); //length of sequence is 8
    int gc_count; //needed to tally how many g&c nucleotides there are
    for (int cycle = 1; cycle <= dna_length; cycle++) //(int cycle =1; cycle <= 8; +1 every loop)
    {
        char nucleotide = dna_sequence[(cycle-1)]; //get the nucleotide at position (cycle - 1)
        char upper_nucleotide = toupper(nucleotide); //makes nucleotides uppper case
        if (upper_nucleotide == 'G' || upper_nucleotide == 'C')
            gc_count += 1; //find how many GCs are in the sequence
    }
    double gc_content = (gc_count/dna_length); //do the division for GC decimal
    return gc_content; //return GC decimal to the caller

}

string get_dna_complement(string dna_sequence) //first find a way to read each char
{
    int dna_length = dna_sequence.length(); //needed for the loop
    string dna_complement; //need this prepared to add complement characters to
    for (int cycle = 1; cycle <= dna_length; cycle++)
        {
            char nucleotide = dna_sequence[(cycle-1)]; //get nucleotide at this position
            char upper_nucleotide = toupper(nucleotide); //make it uppercase just in case
            if (upper_nucleotide == 'G')
                dna_complement += 'C'; //turn Gs into Cs, Cs into Gs, As into Ts, and Ts into As
            else if (upper_nucleotide == 'C')
                dna_complement += 'G';
            else if (upper_nucleotide == 'A')
                dna_complement += 'T';
            else if (upper_nucleotide == 'T')
                dna_complement += 'A';
        }
    return dna_complement;
}

string get_reverse_string(string dna_sequence)
{
    int dna_length = dna_sequence.length();
    string dna_reversed;
    for (int cycle = dna_length; cycle >= 1; cycle--)
    {
        char nucleotide = dna_sequence[(cycle-1)];
        char upper_nucleotide = toupper(nucleotide);
        dna_reversed += upper_nucleotide;
    }
    return dna_reversed;
}