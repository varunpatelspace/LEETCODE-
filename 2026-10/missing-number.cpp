/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : missing-number                                              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 1, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/missing-number/submissions/2158911380/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = 0;
     for(int i=0; i < nums.size(); i++){
        count=count+nums[i];
     }
     int n = nums.size();
     int sum = n*(n+1)/2;
     return sum-count;
        
    }
};