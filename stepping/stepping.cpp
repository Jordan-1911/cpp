/**
 * DEBUGGING BASICS
 * 
 * Stepping
 * 
 * Step into
 * - the step into command executes the next statement in the normal execution of the program so we can examine the program's state using the debugger. If the statement being executed contains a function call, step into causes the program to jump to the top of the function being called, where it will pause.
 * 
 * The program below demonstrates this concept.
 * 
 * Step into in VS Code can be chosen using F11
*/

#include <iostream>

void printValue(int value) {
    std::cout << value << '\n';
}

int main() {
    printValue(5);

    return 0;
}
