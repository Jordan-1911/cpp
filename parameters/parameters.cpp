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

// void doPrint() {
//     std::cout << "In doPrint()\n";
// }

// This function takes one integer parameter named x
// the caller will supply the value of x
// void printValue(int x) {
//     std::cout << x << '\n';
// }

// int add(int x, int y) {
//     return x + y;
// }

// int main() {
//     doPrint();              // this call has no args
//     printValue(6);          // 6 is the argument passed to function printValue()
//     int result{add(2, 3)};  // 2 and 3 are passed to function add
    
//     std::cout << result << "\n";

//     return 0;
// }

// We can also use return values as arguments

// int getValueFromUser() {
//     std::cout << "Enter an integer: ";
//     int input{};
//     std::cin >> input;

//     return input;
// }

// void printDouble(int value) {
//     std::cout << value << " doubled is: " << value*2 << '\n';
// }

// int main() {
//     printDouble(getValueFromUser());

//     return 0;
// }

// Write a program that reads an integer from the user, doubles it using the doubleNumber() you wrote in the previous quiz question, and then print the doubled value out to the console

int doubleNumber(int x) {
    return x*2;
}

int getValueFromUser() {
    std::cout << "Please enter an integer: ";

    int input{};
    std::cin >> input;

    return input;
}

int main() {
    int result{doubleNumber(getValueFromUser())};

    std::cout << result;


    return 0;
}
