#include <iostream>

/**
 * For this program I will be using BR Reais.
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of reais
 * 
 * You may assume that the number of reais entered is greater than or equal to zero.
 * 
 * The program should then display how to provide the change to the user.
 * 
 * In the BR:
 * 100 reais;
 * 50 reais;
 * 20 reais;
 * 10 reais;
 * 5 reais;
 * 2 reais;
 * 1 real;
*/

int main(){

    int reais = 0;
    int remain = 0;
    std::cout << "Enter an amount in reais: ";
    std::cin >> reais;

    if(reais >=0 ){
        std::cout << reais / 100 << " bills of 100 Reais" << std::endl;
        remain = reais % 100;
        std::cout << remain / 50 << " bills of 50 Reais" << std::endl;
        remain = remain % 50;
        std::cout << remain / 20 << " bills of 20 Reais" << std::endl; 
        remain = remain % 20;
        std::cout << remain / 10 << " bills of 10 Reais" << std::endl;  
        remain = remain % 10;
        std::cout << remain / 5 << " bills of 5 Reais" << std::endl;  
        remain = remain % 5;
        std::cout << remain / 2 << " bills of 2 Reais" << std::endl;  
        remain = remain % 2;
        std::cout << remain<< " bills of 1 Reais" << std::endl;  
    }
    return 0;
}