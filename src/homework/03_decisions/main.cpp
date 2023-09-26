//write include statements
#include<iostream>
#include<iomanip>
#include<decisions.h>
using namespace std;

int main() 
{
	int choice;

	cout << "Welcome to the Grade Translator App\n";
	cout << "The easiest way to translate your grade!\n\n";
	cout << "Press '1' to translate your grade by 'if-else':\n";
	cout << "Press '2' to translate your grade by menu:\n";
	cin >> choice;

	if (choice == 1)
		get_letter_grade_using_if();
	if (choice == 2)
		get_letter_grade_using_switch();
		
	return 0;
}