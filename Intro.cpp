/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    
    char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    std::string firstName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    
    
    std::cout<<"Hello " << firstName << endl;
    std::cout<<"You entered the integer value:" << number << endl;
    std::cout<<"You entered the char value: " <<letter << endl;

    return 0;
}
