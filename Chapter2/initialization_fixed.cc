#include <iostream>

int main() {
    // Correct!
    int input_value;
    std::cout << "input_value: " << input_value << std::endl; // should be undefined
    std::cin >> input_value; // error, assignment before initialization
    std::cout << "input_value: " << input_value << std::endl;

    // Correct!
    int i(3.14); 
    std::cout << "initial value of i: " << i << std::endl; // should be 3

    // Wrong! wage was not initialized
    double wage = 9999.99;
    double salary = wage;
    std::cout << "salary: " << salary << std::endl << wage << std::endl; // should be 9999.99
    std::cout << "wage: " << wage << std::endl << wage << std::endl; // should be 9999.99

    // Wrong! cannot initialize same variable twice
    int j = 3.14; // ok, i will get 3 (Wrong)
    std::cout << "initial value of j: " << j << std::endl; // should be 3

    return 0;
}
