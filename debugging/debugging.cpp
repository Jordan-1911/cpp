#include <iostream>

/**
 * This covers the basics of debugging. In general, here are the steps:
 * 
 * 1) Find the root cause of the problem (line of code not working usually)
 * 2) Ensure you understand why the issue is occurring
 * 3) Determine how you'll fix the issue
 * 4) Repair the issue causing the problem
 * 5) Retest to ensure the problem has been fixed and no new problems have emerged
 * 
 * TIPS
 * - Using version control can help you see which lines you have commented out during debugging to revert back
 * - It might help to unindent debugging lines to delete later
 * 
 * 
*/

int add(int x, int y) {
    return x + y;
}

void printResult(int z) {
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x{getUserInput()};
std::cerr << "main::x = " << x << '\n';
    int y{getUserInput()};
std::cerr << "main::y = " << y << '\n';

    std::cout << x << " + " << y << '\n';

    int z{add(x, 5)};
std::cerr << "main::z = " << z << '\n';
    printResult(z);

}
