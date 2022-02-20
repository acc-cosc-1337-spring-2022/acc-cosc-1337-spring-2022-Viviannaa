#include "decisions.h"

//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1




std::string get_grade_points_using_if( int grade)
{
	std::string letter_grade;
	if (grade <= 100 and grade >= 90) 
	{
		letter_grade =  "A";
	}
	else if(grade >= 80) 
	{
		letter_grade = "B";
	}
	else if (grade >= 70)
	{
		letter_grade ="C";
	}
	else if (grade >= 60)
	{
		letter_grade = "D";
	}
	else
	{
		letter_grade = "F";
	}
	return letter_grade;
}


std::string get_letter_grade_using_switch(int grade)
{ 
	std::string letter_grade;
	int ten = 10;

	grade = grade/ten;
	
	switch (grade)
	{
		case 9 or 1:
			letter_grade = "A";
			break;
		case 8:
			letter_grade = "B"; 
			break;
		case 7: 
			letter_grade = "C";
			break;
		case 6: 
			letter_grade = "D";
			break;
		default:
			letter_grade = "F";
			break;
	}
	return letter_grade;
}