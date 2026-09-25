/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : contains-duplicate-ii                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 25, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/contains-duplicate-ii/submissions/2153222089/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> lastIndex;

        for(int i = 0; i < nums.size(); i++) {

            if(lastIndex.count(nums[i])) {

                if(i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }

            lastIndex[nums[i]] = i;
        }

        return false;
    }
};