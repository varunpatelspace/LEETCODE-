/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-a-2d-matrix                                          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/search-a-2d-matrix/description/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int r = 0, c = m - 1;

        while (r < n && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            }
            else if (matrix[r][c] > target) {
                c--;
            }
            else {
                r++;
            }
        }

        return false;
    }
};
