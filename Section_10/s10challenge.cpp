#include <iostream>
#include <string>

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

int main() {
    
    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    std::string message;
    std::cout << "Insert word to encrypt: ";
    std::getline(std::cin, message);

    std::string encrypted_message;

    for(char c: message){
        size_t position = alphabet.find(c);
        if (position != std::string::npos) {
            char new_char = key.at(position);
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }

    std::cout << "Encrypting message" << std::endl;
    std::cout << "Encrypted message: " << encrypted_message << std::endl;

    std::string decrypted_message;

    for(char c: encrypted_message){
        size_t position = key.find(c);
        if (position != std::string::npos) {
            char new_char = alphabet.at(position);
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }
    
    std::cout << "Decrypting message" << std::endl;
    std::cout << "Decrypted message: " << decrypted_message << std::endl;

    return 0;
}