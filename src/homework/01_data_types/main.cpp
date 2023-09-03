//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cin; using std::cout;

int main()
{
	int num;
	cout << "Enter a number for variable 'num': ";
	cin >> num;
	int result;
	result = multiply_numbers(num);
	cout << "Multiplying that variable equals: ";
	cout << result << "\n";
	int num1 = 4;
	result = multiply_numbers(num1);
	cout << "Multiplying a new variable equals: ";
	cout << result << "\n";

	return 0;
}
