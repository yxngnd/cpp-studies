// Letter Pyramid
// Written by Nirvan Yang Damaceno

#include <iostream>
#include <string>

/**
 * Receive the input
 * Loop for every letter
 * Display the spaces
 * Display the letter and the others in order
 * Display the letters in reversed order
*/

int main(){

    std::string letters;
    std::cout << "Enter the string of letters to turn into a pyramid: ";
    std::getline(std::cin, letters);

    size_t num_letters = letters.length();
    int position = 0;

    for(char c: letters){
        size_t spaces = num_letters - position;

        while(spaces > 0){
            std::cout << " ";
            spaces--;
        }

        for(int i = 0; i < position; i++){
            std::cout << letters[i];
        }

        std::cout << c;

        for(int j = position - 1; j > -1; --j){
            std::cout << letters[j];
        }

        std::cout << std::endl;
        position++;
    }

    return 0;
}