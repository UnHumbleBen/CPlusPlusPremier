#include <iostream>
/*
 * Simple main function: /* incorrect */
 * Read two numbers and write their sum
 */
int main()
{
    // prompt user to enter two numbers
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;   // variables to hold the input we read
    std::cin >> v1 >> v2; // read input
    std::cout << "The product of " << v1;
    std::cout               << " and " << v2;
    std::cout           << " is " << v1 * v2 << std::endl;

    return 0;
}
