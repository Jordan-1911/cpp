#include <iostream>



int main() {

    std::cout << "Please enter an integer: ";

    int num{};               // define variable num as an integer variable
    std::cin >> num;         // get integer value from keyboard

    std::cout << "Double that number is: " << num * 2 << '\n';
    
    return 0;
}
