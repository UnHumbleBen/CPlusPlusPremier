#include <iostream>

int main() {
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;

    std::cout << "Expected" << std::endl;
    std::cout << "10 10" << std::endl;
    return 0;
}
