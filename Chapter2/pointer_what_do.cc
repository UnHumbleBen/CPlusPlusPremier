#include <iostream>

int main() {
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    std::cout << "Value of i: " << i << " (Expected value: )" << 42 * 42 << std::endl;
    return 0;
}
