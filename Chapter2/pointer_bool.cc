#include <iostream>

int main() {
    int a = 0;
    int *p = &a;

    bool pointer_p = nullptr;
    bool defer_p = *p;

    std::cout << "p is " << pointer_p << std::endl
              << "*p is " << defer_p << std::endl;

    return 0;
}
