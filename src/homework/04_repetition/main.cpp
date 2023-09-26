//write include statements
#include<iostream>
#include<repetition.h>
using namespace std;

//write using statements

int main() 
{
	int numberChoice;
	do
	{
		cout << "Which math program would you like to use?\n";
		cout << "Enter 1 for Factorials.\n";
		cout << "Enter 2 for Greatest Common Divisor.\n";
		cout << "Enter 3 to quit.\n";
		cout << "Which option would you prefer?: ";
		cin >> numberChoice;

		switch(numberChoice)
		{
			case 1: factorial();
				break;
			case 2: gcd();
				break;
			case 3: cout << "Are you sure you want to exit?\n";
				cout << "Enter 3 to quit. Enter 0 to go back: ";
				cin >> numberChoice;
				break;
		}
	} 
	while (numberChoice != 3);
	
	return 0;
}
