/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : move-zeroes                                                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 21, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/move-zeroes/                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};