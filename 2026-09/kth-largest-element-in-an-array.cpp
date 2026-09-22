/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : kth-largest-element-in-an-array                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 22, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/2149473925/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    int  n = nums.size();
    sort(nums.begin(),nums.end());
    return nums[n-k];
    }
};