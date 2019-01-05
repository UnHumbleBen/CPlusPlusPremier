#include <iostream>

int main() {
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    std::cout << "initial values" << std::endl;
    std::cout << "i: " << i << std::endl << "d: " << d << std::endl;
    std::cout << "EXPECTED:" << std::endl << "i: 0" << std::endl << "d: 0" << std::endl;

    // WRONG, reference assignment OK
    std::cout << std::endl << "r2 = 3.14159" << std::endl;
    r2 = 3.14159; // invalid, cannot rebind reference 
    std::cout << "i: " << i << std::endl << "d: " << d << std::endl;
    std::cout << "EXPECTED:" << std::endl << "i: 0" << std::endl << "d: 3.14159" << std::endl;

    /* 
    // WRONG, reference assignment OK, also seems like int converts to double
    std::cout << std::endl << "r2 = r1" << std::endl;
    r2 = r1; // invalid, cannot rebind reference, also mistmatched types
    std::cout << "i: " << i << std::endl << "d: " << d << std::endl;
    std::cout << "EXPECTED:" << std::endl << "i: 0" << std::endl << "d: 0" << std::endl;
    */

    std::cout << std::endl << "i = r2" << std::endl;
    i = r2; // assigns 0 to i
    std::cout << "i: " << i << std::endl << "d: " << d << std::endl;
    std::cout << "EXPECTED:" << std::endl << "i: 3" << std::endl << "d: 3.14159" << std::endl;

    std::cout << std::endl << "r1 = d" << std::endl;
    r1 = d; // assigns 0 to i (since r1 binds to i)
    std::cout << "i: " << i << std::endl << "d: " << d << std::endl;
    std::cout << "EXPECTED:" << std::endl << "i: 3" << std::endl << "d: 3.14159" << std::endl;

    return 0;
}
