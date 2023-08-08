#include <iostream>

/**
 * Frank's Carpet Cleaning Service.
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the userfor the number of small and larger room they would like cleaned and
 * provide an estimate;
*/

int main(){

    const double priceSmallRoom {25};
    const double priceLargeRoom {35};
    const double salesTax {0.06};
    const int estimateExpiry {30};

    int numSmallRooms {0};
    int numLargeRooms {0};

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: ";
    std::cin >> numSmallRooms;
    std::cout << "Number of large rooms: ";
    std::cin >> numLargeRooms;

    double totalCost {(numSmallRooms*priceSmallRoom) + (numLargeRooms*priceLargeRoom)};
    double tax {totalCost*salesTax};

    std::cout << "Price per small room: $" << priceSmallRoom << std::endl;
    std::cout << "Price per large room: $" << priceLargeRoom << std::endl;
    std::cout << "Cost: $" << totalCost << std::endl;
    std::cout << "Tax: $" << tax << std::endl;

    std::cout << "Total estimate: $" << totalCost+tax << std::endl;
    std::cout << "This estimate is valid for " << estimateExpiry << " days" << std::endl; 


    return 0;
}