//add include statements
#include<iostream>
using namespace std;

//add function(s) code here
int factorial()
{
    int num, factorialMath = 0, originalNum; 
    cout << "This program takes any integer and returns its factorial.\n";
    cout << "Please enter an integer: ";
    cin >> num;
    originalNum = num;
    for (num; num >= 1; num--)
    {
        factorialMath *= num;
    }
    cout << "The factorial of your integer " << originalNum << " is " << factorialMath << endl;
}



int gcd()
{
    int num1, num2;
    cout << "This program takes two integers and finds their greatest common devisor (gcd)";
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    int originalnum1 = num1;
    int originalnum2 = num2;
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int transferNum = num1;
            num1 = num2;
            num2 = transferNum;
        }
        if (num1 > num2)
        {
            num1 -= num2;
        }
    return num1;
    }
    cout << "The greatest common divisor of " << originalnum1;
    cout << " and " << originalnum2 << " is " << num1 << endl;
}