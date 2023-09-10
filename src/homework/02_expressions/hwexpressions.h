//example
int add_numbers(int num1, int num2);

#include <iostream>
using namespace std;

//write function prototype here

double TAX_RATE = 0.0675;
double get_sales_tax_amount(double meal_amount)
{
    double tax_calculation = meal_amount * TAX_RATE;
    return tax_calculation;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
    double tip_calculation = meal_amount * tip_rate / 100;
    return tip_calculation;
}