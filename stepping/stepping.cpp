/**
 * DEBUGGING BASICS
 * 
 * Stepping
 * 
 * STEP INTO
 * - the step into command executes the next statement in the normal execution of the program so we can examine the program's state using the debugger. If the statement being executed contains a function call, step into causes the program to jump to the top of the function being called, where it will pause.
 * - in VS Code can be chosen using F11
 * 
 * STEP OVER
 * - executes the next statement in the normal execution path. However, whereas step into will enter function calls and execute them line by line, step over will execute an entire function without stopping and return control to you after the function has been executed.
 * 
 * STEP OUT
 * Step out does not just execute the next line of code. Instead, it executes all remaining code in the function being executed, and then returns control to you when the function has returned. 
*/

#include <iostream>

void printValue(int value) {
    std::cout << value << '\n';
}

int main() {
    printValue(5);

    return 0;
}
