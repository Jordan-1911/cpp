#include <iostream>

int five() {
    return 5;
}

int main() {
    int a{2};
    int b{2+3};
    int c{(2*3)+4};
    int d{b};
    int e{five()};

    std::cout << e << '\n';

    // 2               // 2 is a literal that evaluates to value 2
    // "Hello World"   // "Hello World!" is a literal that evaluates to the text "Hello World"
    // x               // x is a variable that evaluates to the value of x
    // 2+3             // operator + uses operands 2 and 3 to evaluate to value 5
    // five()          // evaluates to the return value of function five()
    
    return 0;

}
