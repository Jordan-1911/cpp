// std::endl vs '\n'

#include <iostream>

int main() {
    int x{5};
    std::cout << "The value of x is: " << x << '\n';  // Using '\n' standalone
    std::cout << "And that is all, fols!\n";  // Using '\n' embedded 
    return 0;
}
