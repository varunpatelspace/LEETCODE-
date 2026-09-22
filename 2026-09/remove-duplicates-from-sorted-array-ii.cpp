/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : remove-duplicates-from-sorted-array-ii                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 22, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/2149462298/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int x : nums){
              if(k < 2 || x != nums[k - 2]) {
                nums[k] = x;
                k++;
            }
        }
        return k;
    }
};