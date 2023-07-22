/**
 * Leetcode 9. Palindrome Number
 * 
 * Given an integer x, return true if x is a palindrome (same backwards as it is forwards), and false otherwise
 * 
 * 
 * EXAMPLE:
 * Input x = 121
 * Output = true
 * 
*/

// One way to do this is to compare it to its reversed counterpart

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x, reverse = 0;

        while (x > 0) {
            int remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x = x / 10;
        }
        return original == reverse;
    }
};

int main() {
    Solution sol;
    int x = 121;
    if (sol.isPalindrome(x)) {
        std::cout << x << " is a Palindrome number" << '\n';
    } else {
        std::cout << x << " is not a Palindrome number" << '\n';
    }

    return 0;
}

