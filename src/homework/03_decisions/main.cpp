#include<iostream>
#include <string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"


int main()
{
	// variables
	int grade; 
	int option;
	std::string letter_grade;

	//menu display
	cout << "Main Menu: \n";
	cout << "option 1 - Letter grade using if\n";
	cout << "option 2 - Letter grade using switch\n";
	cout << "option 3 - Exit Program\n";

	
	// users choice of menu option
	cout << "Enter number of option to run:  \n";
	cin >> option;

	if (option == 1 || option == 2) 
	{
		cout << "enter grade between 1 - 100: \n";
		cin >> grade;
		
		
		if (option == 1)// run else if function 
		{
			letter_grade = get_letter_grade_using_if(grade);
			cout<< "Your letter grade is: ";
			cout << letter_grade;
		}
		else if (option == 2) // run switch function 
		{
			letter_grade = get_letter_grade_using_switch(grade);
			cout << "\n Your letter grade is: ";
			cout << letter_grade;
		}
		
	}
	//exit program
	else if(option == 3)
	{
		return 0;
	}
}