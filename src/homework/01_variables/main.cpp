//write include statements
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
using std::cin;
using std::cout;  


int main()
{
	//user inputs number
	int num;
	cout << "number: ";
	cin >> num; 
	
	//executes multiply_numbers function with user's input number and displays result
	int result = multiply_numbers(num);
	cout << "result variable is: "<< result;

	//executes multiply_numbers function with new variable and displays result
	int num1 = 4;
	result = multiply_numbers(num1); // assign return variable to result
	cout << "result variable with :"<< num1 << "is" << result;

	return 0;
}
