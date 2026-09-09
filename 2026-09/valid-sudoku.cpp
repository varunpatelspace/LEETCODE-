/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : valid-sudoku                                                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 9, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/valid-sudoku/submissions/2136601915/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        bool row[9][10] = {};
        bool col[9][10] = {};
        bool box[9][10] = {};

        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {

                char ch = board[i][j];

                if (ch == '.')
                    continue;

                int num = ch - '0';

                int boxIndex = (i / 3) * 3 + (j / 3);

                if (row[i][num] ||
                    col[j][num] ||
                    box[boxIndex][num]) {
                    return false;
                    }
                row[i][num] = true;
                col[j][num] = true;
                box[boxIndex][num] = true;
            }
        }

        return true;
    }
};