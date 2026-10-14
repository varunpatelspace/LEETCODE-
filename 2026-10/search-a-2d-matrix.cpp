/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-a-2d-matrix                                          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/search-a-2d-matrix/submissions/2172396717/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n == 0 || matrix[0].empty())
            return false;

        int m = matrix[0].size();
        int low = 0, high = n * m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int value = matrix[mid / m][mid % m];

            if (value == target)
                return true;
            else if (value < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};