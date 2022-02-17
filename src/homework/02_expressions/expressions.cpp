#include "expressions.h"

//example
/*int add_numbers(int num1, int num2)
{
	return num1 + num2;
}
*/

//write code for multiply_numbers function here
//function returns product of num1 and num2

// find sales tax
double get_sales_tax_amount(double meal_amount)
{
	double sales_tax = tax_rate/decimal; // converting whole number to decimal
	return sales_tax * meal_amount; 
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip = tip_rate/decimal;// converting tip rate to decimal
	return meal_amount * tip;
}