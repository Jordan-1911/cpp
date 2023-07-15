#include <iostream>

int main() {
    // This will cover the basics of variable assignment
    // and initialization

    int x;  // define a variable named x
    int y, z;  // define two integer variables, named y and z

    // VARIABLE ASSIGNMENT
    int width;  // define an integer variable named width
    width = 5;  // copy assignment of value 5 into variable width

    // variable width now has value 5

    // INITIALIZATION
    // - one of the downsides of declaring a var and then assigning it
    // is it takes two lines
    // - we can achieve the same result in one line with initialization
    int a;         // no initializer (default initialization)
    int b = 5;     // initializer after equals sign (copy initialization)
    int c(6);      // initializer in parenthesis (direct initialization)

    // List initialization methods in (C++)
    int d{7};      // initializer in braces (direct list initialization)
    int e = {8};   // initializer in braces after equals sign (copy list initialization)
    int f{};       // initializer is empty braces (empty initialization)

    int height(5);  // direct initialization of value 5 into variable height
    
    // Direct initialization is also used when values are explicitly cast to another type
    int xx{};      // forward declaration of function x
    int xxx{0};     // definition of variable x with initializer 0


    // When to initialize with {} or {0}?
    // Generally, use explicit initilization if we are using that value
    int xxxx{0};
    std::cout << xxx;

    // But use value inilization when value is temporary and will be replaced
    int yy{};
    std::cin >> yy;

    // If a variable is unused, this will throw errors
    // We can fix that by using the variable (print to console), or do the following:
    [[maybe_unused]] int u{5};

    return 0;
}

