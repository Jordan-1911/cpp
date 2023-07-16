#include <iostream>

// The following will NOT compile
// function printDouble() does not know what identifier num is

// int getValueFromUser() {
//     std::cout << "Enter an integer value: ";
//     int input{};
//     std::cin >> input;
// }

// void printDouble() {
//     std::cout << num << " doubled is: " << num*2 << '\n';
// }

// int main() {
//     int num{getValueFromUser()};
//     printDouble();

//     return 0;
// }

void doPrint() {
    std::cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// the caller will supply the value of x
void printValue(int x) {
    std::cout << x << '\n';
}

int add(int x, int y) {
    return x + y;
}

int main() {
    doPrint();      // this call has no args
    printValue(6);  // 6 is the argument passed to function printValue()
    int result{add(2, 3)};      //
    
    std::cout << result << "\n";

    return 0;
}
