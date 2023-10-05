#include<iostream>
#include<iomanip>
#include<string>
#include<func.h>
using namespace std;

int main() 
{
	int choice;
	string dna_sequence;
	string dna_calc_gc_content;
	string dna_reversed_step1;
	string dna_complement_step2;
	do
	{
		cout << "Welcome to Gene-Analysis, for all your nucleotide needs:" << endl << endl;
		cout << "Please pay attention as our menu options have changed" << endl;
		cout << "To get the GC content of a DNA sequence, enter 1" << endl;
		cout << "To Get the DNA complement of your sequence, enter 2" << endl;
		cout << "To quit the program, enter 3";
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3)
		{
			switch(choice)
			{
				case 1: 
					cout << "Please enter your DNA sequence with no spaces or characters besides A, T, G, and C" << endl;
					cin >> dna_sequence;
					dna_calc_gc_content = get_gc_content(dna_sequence);
					cout << "Your sequence's GC content is: " << dna_calc_gc_content << endl;
					break;
				case 2: 
					cout << "Please enter your DNA sequence with no spaces or characters besides A, T, G, and C" << endl;
					cin >> dna_sequence;
					dna_reversed_step1 = get_reverse_string(dna_sequence);
					dna_complement_step2 = get_dna_complement(dna_reversed_step1);
					cout << "Your sequence's reverse complement is: " << dna_complement_step2 << endl;
					break;
			}
		}
		else
		{
			cout << "That is not a valid entry.  Please try again." << endl;
		}
	} 
	while (choice != 3);
	return 0;
}
