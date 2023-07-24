/**
 * Leetcode 13. Roman to Integer
 * 
 * Roman numerals are represented by seven different symbols:
 * I - 1
 * V - 5
 * X - 10
 * L - 50
 * C - 100
 * D - 500
 * M - 1000
 * 
 * Roman numerals are written largest to smallest, left to right. However, the number 4 is not. 
 * 
 * 2 is written as II
 * 12 is written as XII
 * 
 * I can be placed before V (5) and X (10) to make 4 and 9
 * 
 * X can be placed before L (50) and C (100) to make 40 and 90
 * 
 * C can be placed before D (500) and M (1000) to make 400 and 900
 * 
 * EXAMPLE 1
 * 
 * Input: s = "III"
 * Output: 3
 * 
*/

// psuedo code
/**
 * for (i=0 to len) {
 *  if(i is last index OR
 *      roman[str[i]] >= roman[str]i+1]]))
 *     num = roman[str[i+1]] and i++
 *  else {
 *      num = roman[str[i+1]] - roman[str[i]]
 *      i = i + 2
 *  }
 *  sum = sum + num
 * }
 */

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int len = s.length();
        int num{0};
        int sum{0};

        for(int i=0; i<len; ) {
            if(1 == (len-1) || (roman[s[i]] >= roman[s[i+1]])) {
            num = roman[s[i]];
            i++;
    
            } else {
                num = roman[s[i+1]] - roman[s[i]];
                i += 2;
            }
            sum += num;
        }
    return sum;
    }
};

int main() {
    Solution sol;
    string input = "III";
    int result = sol.romanToInt(input);
    std::cout << "The roman numeral: " << input << " corresponds to: " << result << '\n';

    Solution solTwo;
    string inputTwo = "LVIII";
    int resultTwo = solTwo.romanToInt(inputTwo);
    std::cout << "The roman numeral: " << inputTwo << " corresponds to: " << resultTwo << '\n';

    return 0;
}
