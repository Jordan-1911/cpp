// std::endl vs '\n'

#include <iostream>

int main() {
    int x{5};
    std::cout << "The value of x is: " << x << '\n';  // Using '\n' standalone
    std::cout << "And that is all, fols!\n";  // Using '\n' embedded 
    

    // another iostream predefined variable is std::cin
    // std::cin reads input from the keyboards using the
    // extraction operator >>.
    // - the input must be stored in a variable to be used
    std::cout << "Please enter a number: ";  // ask user for a number
    int y{};  // define variable x to hold user input (and zero-initialize it)
    std::cin >> y;  // get number from keyboard and store it in variable x

    std::cout << "You entered " << y << '\n';

    // Just like it is possible to output more than one bit of text in a single line
    // it is also possible to input more than one value on a single line:
    std::cout << "Please enter two numbers seperated by a space: ";

    int a{};  // define variable a to hold user input (and zero-initialize it)
    int b{};  // define variable b to hold user input (and zero-intialize it)
    std::cin >> a >> b;  // get two numbers and store in variable a and b

    std::cout << "You entered: " << a << " and " << b << '\n';
    
    // UNITIALIZED VARIABLES
    int c;  // unitialized because we have not given it a value
    
    // print the value of x to the screen
    std::cout << c << '\n';  // who knows what we will get, because c is uninitialized

    return 0;
}
