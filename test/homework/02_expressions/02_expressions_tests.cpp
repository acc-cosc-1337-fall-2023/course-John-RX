#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

bool TEST_CASE_1A("Test Get Sales Tax on $10 meal")
{
	bool verify_sales_tax = get_sales_tax_amount(10) == .675;
	cout << "It is " << verify_sales_tax << " that the 'get_sales_tax_amount' function works with parameter 10.";
	return 0;
}

bool TEST_CASE_1B("Test Get Sales Tax on $20 meal")
{
	bool verify_sales_tax = get_sales_tax_amount(20) == 1.35;
	cout << "It is " << verify_sales_tax << " that the 'get_sales_tax_amount' function works with parameter 20.";
	return 0;
}

bool TEST_CASE_2A("Test Get Tip Amount with 15%")
{
	bool verify_tip_cost = get_tip_amount(20, 15) == 3;
	cout << "It is " << verify_tip_cost << " that the 'get_tip_amount' function works "
	<< "with parameter $20 meal and 15% tip";
	return 0;
}

bool TEST_CASE_2B("Test Get Tip Amount with 20%")
{
	bool verify_tip_cost = get_tip_amount(20, 20) == 4;
	cout << "It is " << verify_tip_cost << " that the 'get_tip_amount' function works "
	<< "with parameters $20 meal and 20% tip";
}