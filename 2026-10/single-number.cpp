/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : single-number                                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 16, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/single-number/submissions/2174071128/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int sum = 0;
    for(int num : nums){
        sum = sum^num;
    }
    return sum;
    }
};