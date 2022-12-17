#include "functions.h" // User defined Library Including All Functions For Conversions.
#include <iostream> // Input Output Stream Functions.
using namespace std;

int main()
{
    char userChoice_three;
    int userChoice_one, userChoice_two;
    cout << "NUMBER SYSTEM CONVERTER IN C++\n";
    cout << "===============================\n";
    cout << "Enter the type of number you want to enter:\n";
    cout << "Press:\n1 to convert Binary number.\n2 to convert Decimal number\n3 to convert Hexadecimal number\n4 to convert Octal number\n";
    cin >> userChoice_one;
    if (userChoice_one == 1)
    {
        cout << "Enter the type you want to convert your binary number to:\n";
        cout << "1. Binary to Decimal\n2. Binary to Hexadecimal\n3. Binary to Octal\n";
        cin >> userChoice_two;
        if (userChoice_two == 1)
        {
            convert_bin_to_dec();
        }
        if (userChoice_two == 2)
        {
            convert_bin_to_hex();
        }
        if (userChoice_two == 3)
        {
            convert_bin_to_oct();
        }
    }
    else if (userChoice_one == 2)
    {
        cout << "Enter the type you want to convert your Decimal number to:\n";
        cout << "1. Decimal to Binary\n2. Decimal to Hexadecimal\n3. Decimal to Octal\n";
        cin >> userChoice_two;
        if (userChoice_two == 1)
        {
            convert_dec_to_bin();
        }
        if (userChoice_two == 2)
        {
            convert_dec_to_hex();
        }
        if (userChoice_two == 3)
        {
            convert_dec_to_oct();
        }
    }
    else if (userChoice_one == 3)
    {
        cout << "Enter the type you want to convert your Hexadecimal number to:\n";
        cout << "1. Hexadecimal to Binary\n2. Hexadecimal to Decimal\n3. Hexadecimal to Octal\n";
        cin >> userChoice_two;
        if (userChoice_two == 1)
        {
            convert_hex_to_bin();
        }
        if (userChoice_two == 2)
        {
            convert_hex_to_dec();
        }
        if (userChoice_two == 3)
        {
            convert_hex_to_oct();
        }
    }
    else if (userChoice_one == 4)
    {
        cout << "Enter the type you want to convert your Octal number to:\n";
        cout << "1. Octal to Binary\n2. Octal to Decimal\n3. Octal to Hexadecimal\n";
        cin >> userChoice_two;
        if (userChoice_two == 1)
        {
            convert_oct_to_bin();
        }
        if (userChoice_two == 2)
        { 
            convert_oct_to_dec();
        }
        if (userChoice_two == 3)
        {
            convert_oct_to_hex();
        }
    }
    label_1:cout << "\nDo you want to run this program again?\nPress Y for Yes, N for No\n"; // Labeling this statement so we can execute this again if user enters a wrong input.
    cin >> userChoice_three;
    if(userChoice_three=='Y' || userChoice_three=='y') {
        main();
    }
    else if(userChoice_three=='N' || userChoice_three=='n') {
        cout << "Program Exited.\n";
    }
    else {
        cout << "Invalid Choice\n";
        cout << "Select your choice again: \n";
        goto label_1; // Gives user the access to enter their choice again.
    }
}