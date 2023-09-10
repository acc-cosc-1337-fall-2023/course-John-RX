//write include statements
#include <iostream>
#include <hwexpressions.h>
using namespace std;

//write namespace using statement for cout

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout << "How much did your meal cost? $";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout << "What percentage did you tip? %";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout << "Here is a display of your receipt:" << endl;
	cout << "Meal Amount: \t" << meal_amount;
	cout << "Sales Tax: \t" << tax_amount;
	cout << "Tip Amount: \t" << tip_amount;
	cout << "Total: \t" << total;
	return 0;
}
