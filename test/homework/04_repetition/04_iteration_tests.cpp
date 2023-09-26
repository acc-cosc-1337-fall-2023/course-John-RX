#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

int factorial1()
{
    int num = 3, factorialMath = 0, originalNum; 
    cout << "This program takes any integer and returns its factorial.\n";
    originalNum = num;
    for (num; num >= 1; num--)
    {
        factorialMath *= num;
    }
    cout << "The factorial of your integer " << originalNum << " is " << factorialMath << endl;
}


int factorial2()
{
    int num = 5, factorialMath = 0, originalNum; 
    cout << "This program takes any integer and returns its factorial.\n";
    originalNum = num;
    for (num; num >= 1; num--)
    {
        factorialMath *= num;
    }
    cout << "The factorial of your integer " << originalNum << " is " << factorialMath << endl;
}


int factorial3()
{
    int num = 6, factorialMath = 0, originalNum; 
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


int gcd1()
{
    int num1 = 5, num2 = 15;
    cout << "This program takes two integers and finds their greatest common devisor (gcd)";
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


int gcd2()
{
    int num1 = 21, num2 = 28;
    cout << "This program takes two integers and finds their greatest common devisor (gcd)";
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


int gcd3()
{
    int num1 = 25, num2 = 100;
    cout << "This program takes two integers and finds their greatest common devisor (gcd)";
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