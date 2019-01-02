#include<iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum, book;
    std::cin >> sum;
    while (std::cin >> book)
        sum += book;
    std::cout << "Sum of all the transactions:"
              << std::endl << sum << std::endl;

    return 0;
}
