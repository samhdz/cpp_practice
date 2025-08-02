#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter three numbers: "; // ask user for a number
    int x{}; // define variable x to hold user input
    int y{}; // define variable y to hold user input
    int z{}; // define variable z to hold user input
    std::cin >> x >> y >> z; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << " and " << y << " and " << z << "\n";

    return 0;
}
