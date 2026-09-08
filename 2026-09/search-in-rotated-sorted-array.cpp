/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-in-rotated-sorted-array                              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 8, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/2134832269/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
    for(int i=0; i<n; i++){
            if(nums[i]==target ){
                return i;
            }
        }
        return -1;
    }
};