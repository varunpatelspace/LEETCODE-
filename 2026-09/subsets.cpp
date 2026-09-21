/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : subsets                                                     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 21, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/subsets/submissions/2148730670/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        int n = nums.size();

        res.push_back({});

        for(int i = 0; i < n; i++) {

            int size = res.size();

            for(int j = 0; j < size; j++) {

                vector<int> temp = res[j];

                temp.push_back(nums[i]);

                res.push_back(temp);
            }
        }

        return res;
    }
};