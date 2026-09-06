/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : concatenation-of-array                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 6, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/concatenation-of-array/submissions/2132531262/?envType=problem-list-v2&envId=dsa-linear-shoal-array-i║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      int p=nums.size();
        for(int j=0;j<p;j++)
        {
            nums.push_back(nums[j]);
        }
        return nums;
    }   
    
};