/**
 * 688. Knight Probability in Chessboard
 * 
 * On an n x n chessboard, a knight starts at the cell (row, column) and attempts to make exactly k moves. The rows and columns are 0-indexed, so the top-left cell is (0, 0), and the bottom-right cell is (n - 1, n - 1).
 * 
 * A chess knight has eight possible moves it can make, as illustrated below. Each move is two cells in a cardinal direction, then one cell in an orthogonal direction.
 * 
 * Each time the knight is to move, it chooses one of eight possible moves uniformly at random (even if the piece would go off the chessboard) and moves there.
 * 
 * The knight continues moving until it has made exactly k moves or has moved off the chessboard.
 * 
 * Return the probability that the knight remains on the board after it has stopped moving.
 * 
 * EXAMPLE 1:
 * 
 * Input: n = 3, k = 2, row = 0, column = 0
Output: 0.06250

Explanation: There are two moves (to (1,2), (2,1)) that will keep the knight on the board.

From each of those positions, there are also two moves that will keep the knight on the board.

The total probability the knight stays on the board is 0.0625.
 * 
*/

/**
 * ASSUMPTIONS
 * 
 * - When k = 0, there are no moves left to make, so the probability that the knight is on the board is 1
 * - The probability a knight will land on one particular spot is 1/8 since there are 8 spots a knight can move at any given time.
 * 
*/

// vector is part of the C++ Standard library and is included in the std namespace
#include <vector>
#include <iostream>

// The fully qualified name of the class is std::vector
// but we can use vector directly if we include the following line:
using namespace std;

class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        // Creating a 3D vector dp initialized with 0.0
        // the dimensions of this vector are n X n X (k + 1)
        // this is used to store the probabilities that the knight will be on a cell (i, j) after k moves
        vector<vector<vector<double>>> dp(n, vector<vector<double>>(n, vector<double>(k + 1, 0.0)));

        // the next two lines represent the eight possible moves a knight can make on a chessboard
        vector<int> dx = { -2, -1, 1, 2, 2, 1, -1, -2 };
        vector<int> dy = { 1, 2, 2, 1, -1, -2, -2, -1 };

        // The next line sets the initial position of the knight in the dp array to 1, because the knight is certain to be at the starting position (row, column) before making any moves.
        dp[row][column][0] = 1.0;
        for (int step = 1; step <= k; step++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int move = 0; move < 8; move++) {
                        int x = i + dx[move];
                        int y = j + dy[move];
                        if (x >= 0 && x < n && y >= 0 && y < n) {
                            dp[i][j][step] += dp[x][y][step - 1] / 8.0;
                        }
                    }
                }
            }
        }

        double res = 0.0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res += dp[i][j][k];
            }
        }

        return res;
    }
};


int main() {
    Solution sol;
    double prob = sol.knightProbability(3, 2, 0, 0);
    std::cout << "The probability is: " << prob << '\n';

    return 0;
}
