#include <iostream>

/*
 * Create a C++ program that asks the user for their favorite number between 1 and 100 then
 * reads this number from the console
 */

int main(){

    int num;

    std::cout << "Enter your favorite number between 1 and 100: " << std::endl;
    std::cin >> num;
    std::cout << "That's my favorite number too!" << std::endl;
    std::cout << "Really! " << num << " is my favorite number!" << std::endl;

    return 0;
}