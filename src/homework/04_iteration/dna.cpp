#include "dna.h"

int factorial(int num){

    int i = num - 1;
	while(i > 1){
		num = num * i;
        i = i +1;
    }
    return num;
}



int gcd(int num1, int num2){
    
    while (num1!=num2)
    {
        if (num1 > num2){
            num1 = num1 - num2;
        }
        else if(num1 < num2){
            num2 = num2 - num1;
            
        }
    }
    return num1;
    
}

//menu display
void display_menu()
{
    cout<<"1-Factorial\n";
    cout<<"2-Greatest Common Divisor\n";
    cout<<"3 Exit\n";

}


void handle_menu_option(int option)
{
    std::string confirm;
    

    switch(option)
    {
    case 1:
        factorial_choice();
        break;
    case 2:
        gcd_choice();
        break;
    case 3:
        cout<<"Selected exit\n";
        confirm = confirm_choice();

        if(confirm == "y" || confirm == "Y")
        {
            cout<<"Exiting Program...\n";
        }
        break;
    default: // if any number other than options entered
        cout<<"Invalid Option\n";
        

    }
}


string confirm_choice() {
    string confirm;
    cout << "Are you sure you want to exit? y/n: ";
    cin >> confirm;
    // Validate entry
    while (confirm != "y" && confirm != "n") {
        cout << "Invalid entry\n";
        cout << "Are you sure you want to exit? y/n: ";
        cin >> confirm;
    }
    return confirm;
}


// run in chosen (will be inbedded)
void factorial_choice()
{
    int num = 0;
    cout<<"Enter a number :";
    cin>>num;
    num = factorial(num);
    cout<<"The Factorial number products are : "<<num<<"\n";
}

void gcd_choice()
{
    int num1;
    int num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1;
    cin>>num2;
    num1 = gcd(num1, num2);
    cout<<"GCD Function Products are : "<<num1<<"\n";
}