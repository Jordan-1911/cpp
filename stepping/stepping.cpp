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

// #include <iostream>

// void printValue(int value) {
//     std::cout << value << '\n';
// }

// int main() {
//     printValue(5);

//     return 0;
// }

/**
 * RUN TO CURSOR
 * - Run to cursor comman executes the program until execution reaches the statement selected by your cursor. Then it returns control to you so you can debug starting at that point. This makes for an efficient way to start debugging at a particular point in your code, or if already debugging, to move straight to some place you want to examine further. 
 * 
 * - In VS Code, the run to cursor comman can be accessed while already debugging a program by right clicking a statement in your code and choosing Run to Cursor from the context menu
*/

// #include <iostream>

// void printValue(int value) {
//     std::cout << value << '\n';
//     std::cout << "This line has been selected\n";
// }

// int main() {
//     printValue(5);

//     return 0;
// }

/**
 * CONTINUE
 * - You may just want to run the program from a certain point forward. The easiest way to od this is to use the continue comman. The continue debug command simply continues running the program as normal, either until the program terminates, or until somthing triggers control to return back to you again (such as a breakpoint, which we will cover later)
 * 
 * - In VS Code, the continue command can be accessed while debugging via Run menu > continue or pressing F5
 * 
*/

/**
 * START
 * The continue command has a twin brother named start. The start command performs the same action as continue, just starting from the beginning of the program.
 * 
 * - in VS Code - Run menu > Start Debugging or by pressing the F5 shortcut key.
*/

/**
 * BREAKPOINTS
 * Breakpoints are a special marker that tell the debugger to stop exeuction of the program at the breakpoint when running in debugging mode.
 * 
 * - in VS Code - Run menu > Toggle Breakpoint, or by pressing the F9 shortcut key
*/

/**
 * Breakpoints vs. Run to Cursor
*/

// #include <iostream>

// void printValue(int value) {
//     std::cout << value << '\n';
// }

// int main() {
//     printValue(5);
//     printValue(6);
//     printValue(7);

//     return 0;
// }

/**
 * SET NEXT STATEMENT
 * - Set next command allows us to change the point of execution to some other statement (sometimes informally called jumping). This can be used to jump the point of execution forwards and skip some code that would otherwise execute, or backwards and have something that already executed run again.
 * 
 * - In VS Code - Right click on a statement and choose Jump to cursor from the context menu. 
*/

// #include <iostream>

// int main() {
//     for (int i = 0; i < 5; i++) {
//         std::cout << "The current index is: " << i << '\n';
//     }
// }
