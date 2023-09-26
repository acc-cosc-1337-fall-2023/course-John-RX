//write include statement for decisions header
#include<iostream>
#include<iomanip>
using namespace std;

//Write code for function(s) code here
int get_letter_grade_using_if()
{
    int numberGrade;
    cout << "What is your current grade in this course?: ";
    cin >> numberGrade;

    if ((numberGrade <=100) && (numberGrade >= 90))
        cout << "You have an A!  Congratulations!";
    
    else if (numberGrade >= 80)
        cout << "You have a B.  Keep working at it!";

    else if (numberGrade >= 70)
        cout << "You have a C.  You can do better.";

    else if (numberGrade >= 60)
        cout << "You have a D.  You should ask for help.";
    
    else if (numberGrade >= 0)
        cout << "You have an F.  You are failing!";
    
    else
        cout << "You have entered an invalid grade number!";
    
    return 0;
    }

int get_letter_grade_using_switch()
{
    int numberGrade, calculatedGrade;
    cout << "Hello, this terminal will translate your academic\n";
    cout << "number grade into a letter grade\n\n";
    cout << "Please enter your grade: ";
    cin >> numberGrade;

    calculatedGrade = (numberGrade / 10);

    switch(calculatedGrade)
    {
        case 10: case 9:
            cout << "You have an A!  Congratulations!";
            break;

        case 8:
            cout << "You have a B.  Keep working at it!";
            break;

        case 7:
            cout << "You have a C.  You can do better.";
            break;
        
        case 6:
            cout << "You have a D.  You should ask for help.";
            break;
        
        case 5: case 4: case 3: case 2: case 1: case 0:
            cout << "You have an F.  You are failing!";
            break;
        
        default: cout << "That is an invalid grade.  Try again.";
    }
    return 0;
}