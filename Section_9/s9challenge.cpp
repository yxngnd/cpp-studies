#include <iostream>
#include <vector>

/**
 * This challengeis about using a collection (list) of integers and allowing the user
 * to select options from a menu to perform operations on the list.
 * 
 * Your program shoul display a menu options to the user as follows:
 * 
 * P - Print numbers;
 * A - Add a number;
 * M - Display mean of the number;
 * S - Display the smallest number;
 * L - Display the largest number;
 * Q - Quit.
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be 
 * allowed. If an illegal choice is made, you should display: "Unknow selection, please try again.", and the
 * menu options should be displayed again.
*/

int main(){

    char choice;
    int add = 0;
    int sum = 0;
    double mean = 0;
    int small = 0;
    int large = 0;
    std::vector<int> numbers;

    while(true){
        std::cout  << "Menu:" << std::endl;
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a numbes" << std::endl;
        std::cout << "M - Display mean of the number" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << ": " << std::endl;

        std::cin >> choice;
        if(choice == 'P' || choice == 'p'){
            std::cout << "Numbers: ";
            for(int num: numbers){
                std::cout << num << ", ";
            }
            std::cout << "\n";
        }
        else if(choice == 'A' || choice == 'a'){
            std::cout << "Number to add: ";
            std::cin >> add;
            numbers.push_back(add);
            std::cout << "Number " << add << " added!" << std::endl;
        }
        else if(choice == 'M' || choice == 'm'){
            for(int num: numbers){
                sum = sum + num;
            }
            mean = sum / numbers.size();
            std::cout << "Mean: " << mean << std::endl;
        }
        else if(choice == 'S' || choice == 's'){
            small = numbers.at(0); 
            for(int num: numbers){
                if(small > num){
                    small = num;
                }
            }
            std::cout << "Smallest number: " << small << std::endl;
        }
        else if(choice == 'L' || choice == 'l'){
            large = numbers.at(0); 
            for(int num: numbers){
                if(large < num){
                    large = num;
                }
            }
            std::cout << "Largest number: " << large << std::endl;
        }
        else if(choice == 'Q' || choice == 'q'){
            std::cout << "Bye bye!" << std::endl;
            break;
        }
        else{
            std::cout << "Unknow selection, please try again." << std::endl;
        }
    }

    return 0;
}