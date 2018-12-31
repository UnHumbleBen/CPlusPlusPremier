#include <iostream>
int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int start, end;
    std::cin >> start >> end;
    int num = start;
    std::cout << "The numbers between " << start 
              << " and " << end << " are" << std::endl;
    while (num <= end) {
        std::cout << num << std::endl;
        ++num;
    }
}
