#include <iostream>

int add(int x, int y);

int main() {

    int x{3};
    int y{4};
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y);

    return 0;
}
