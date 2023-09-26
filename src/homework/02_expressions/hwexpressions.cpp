#include "hwexpressions.h"
#include <iostream>
#include <iomanip>
using namespace std;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
int main()
{
	double meal_amount, sales_tax, tip_rate, tip_cost;
	cout << "How much was your meal?: $";
	cin >> meal_amount;
	sales_tax = get_sales_tax_amount(meal_amount);
	cout << "Sales tax on your meal is $" << sales_tax << endl;
	cout << "What percentage do you tip?  %";
	cin >> tip_rate;
	tip_cost = get_tip_amount(meal_amount, tip_rate);
	cout << "Your tip on this meal is $" << tip_cost << endl;
}