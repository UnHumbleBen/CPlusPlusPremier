#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currBook, book;

    // read first number and ensure that we have data to process
    if (std::cin >> currBook) {
        int cnt = 1; 
        while (std::cin >> book) {
            if (currBook.isbn() == book.isbn())
                ++cnt;
            else {
                std::cout << currBook.isbn() << " occurs " 
                          << cnt << " times" << std::endl;
                currBook = book;
                cnt = 1;
            }
        }
        std::cout << currBook.isbn() << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}
