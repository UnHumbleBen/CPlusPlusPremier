#include <iostream>

int main() {
    // Correct!
    std::cin >> int input_value; // error, assignment before initialization
    std::cout << input_value << std::endl;

    // Correct!
    int i = { 3.14 }; // error, list initialization does not allow lost of information
    std::cout << i << std::endl;

    // Wrong! wage was not initialized
    double salary = wage = 9999.99; // ok, initialization before assignment (Wrong)
    std::cout << salary << std::endl << wage << std::endl;

    // Wrong! cannot initialize same variable twice
    int i = 3.14; // ok, i will get 3 (Wrong)
    std::cout << i << std::endl;

    return 0;
}
