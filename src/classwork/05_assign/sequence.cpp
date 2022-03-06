#include "sequence.h"




double get_gc_content(const string& dna)
{
    double dna_size, count, gc_percent;
    dna_size = dna.size();
    for(auto& ch: dna)
    {
        if (ch == 'G' || ch == 'C')
        {
            count++;
        }
    }
    gc_percent = count / dna_size;

    return gc_percent;

}

string reverse_string(string dna)
{
    string test_var;
    for(int i = dna.size()-1; i >=0; i--)
    {
        test_var += dna [i];
    }
    return test_var;

}

std::string get_dna_complement(std::string dna)
{
    
    string reverse_dna = reverse_string(dna);
    for(char i = reverse_dna.size()-1; i >= 0; i--)
    {
        switch(reverse_dna[i])
        {
            case 'G':
                reverse_dna[i] = 'C';
                break;
            case 'C':
                reverse_dna[i] = 'G';
                break;
            case 'T':
                reverse_dna[i] = 'A';
                break;
            case 'A':
                reverse_dna[i] = 'T';
                break;
        }
    }

    return reverse_dna;
}

void display_menu()
{
    cout << "\n--MENU--\n";
    cout << "1 -- get GC conent \n";
    cout << "2 -- get DNA completment\n";
    cout << "3 -- Exit \n";
}

int run_menu()
{
    int choice;
    cout << "enter choice from menu: \n";
        cin >> choice;
    return choice;
}

void user_menu_options(int choice)
{
    string dna_test, result_string;
    double result_doub;

    switch (choice)
    {
    case 1:
        cout << "enter dna string: ";
        cin >> dna_test;
        result_doub = get_gc_content(dna_test);
        cout << "percent in decimal form is: "<< result_string << "\n";

        break;
    case 3:
       break;
    
    default:
    cout << "choice entered is not valid.";
        break;
        
    }
    
}

// ask if user wants to exit / comfirm
char user_confirm_option()
{
    char option_confirmed;
    cout << "are you sure you want to exit this program?\n type y or n: ";
    cin >> option_confirmed;
    return option_confirmed;
}
//write include statements 


/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
