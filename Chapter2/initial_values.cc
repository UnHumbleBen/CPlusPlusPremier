#include <iostream>
#include <string> 

std::string global_str;
int global_int;

int main() {
    int local_int;
    std::string local_str;


    std::cout.flush();
    std::cout << "Let's flush it out" << std::endl;

    // WRONG! STRINGS ARE INITIALIZED AS EMPTY!!!
    std::cout << "(0) " << global_str << std::endl;

    // CORRECT!
    std::cout << "(0) " << global_int << std::endl;
    std::cout << "(Undefined)" << local_int << std::endl;
    std::cout << "(Empty string)" << local_str << std::endl;
}
