/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : smallest-index-with-digit-sum-equal-to-index                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 24, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/submissions/2151544252/?envType=daily-question&envId=2026-09-24║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            
            int n = nums[i];
            int sum = 0;

            while(n > 0) {
                sum += n % 10;
                n = n / 10;
            }

            if(sum == i) {
                return i;
            }
        }

        return -1;
    }
};