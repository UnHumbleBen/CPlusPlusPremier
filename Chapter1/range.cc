#include <iostream>
int main() {
    std::cout << "Enter two numbers:" << std::endl;
    int start, end;
    std::cin >> start >> end;
    
    // handling if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    std::cout << "The numbers between " << start 
              << " and " << end << " are" << std::endl;
    for (int num = start; num <= end; ++num) {
        std::cout << num << std::endl;
    }
}
