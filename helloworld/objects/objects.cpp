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
    int a;        // no initializer (default initialization)
    int b = 5;    // initializer after equals sign (copy initialization)
    int c(6);     // initializer in parenthesis (direct initialization)

    // List initialization methods in (C++)
    int d{7};     // initializer in braces (direct list initialization)
    int e = {8};  // initializer in braces after equals sign (copy list initialization)
    int f{};      // initializer is empty braces (empty initialization)
    
    return 0;
}

