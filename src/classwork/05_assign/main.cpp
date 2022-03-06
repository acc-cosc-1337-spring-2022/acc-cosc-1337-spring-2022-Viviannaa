//write include statements
#include<string>
#include<iostream>
#include "sequence.h"


//write using statements for cin cout


/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{
   int choice;
   char user_confirm;

    do 
	{
		// output menu 
		display_menu();
		// take user's choice and run through options
		choice = run_menu();
        // if user does not want to exit continue...
		if (choice != 3)
		{
            user_menu_options(choice);
		}
		else 
		{    // if user wants exit ask if sure if 'y' exit...
			user_confirm = user_confirm_option();
			if (user_confirm == 'y')
			{
				cout << "Exiting program...";
			}
		}
	}while(user_confirm != 'y');
	return 0;
	
}

