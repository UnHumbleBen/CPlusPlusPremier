#include <iostream>

int main() {
    int object = 10;
    int *pointer = &object;

    std::cout << "Changing value pointer points to" << std::endl;
    *pointer = 5;
    std::cout << "object: " << object << std::endl;

    int new_object = 20;
    pointer = &new_object;
    std::cout << "object: " << object << std::endl;

    return 0;
}
