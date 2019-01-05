#include <iostream>
int i = 42;
int main() {
    int i = 100;
    int j = i;

    std::cout << "Value of j: " << j << std::endl;
    std::cout << "Expected:  100" << std::endl;

    return 0;
}
