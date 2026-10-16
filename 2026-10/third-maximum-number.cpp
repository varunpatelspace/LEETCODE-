/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : third-maximum-number                                        ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 16, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/third-maximum-number/submissions/2174080843/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                count++;
            }

            if (count == 3) {
                return nums[i];
            }
        }

        return nums[0];
    }
};