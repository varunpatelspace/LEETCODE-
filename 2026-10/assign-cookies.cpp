/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : assign-cookies                                              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 17, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/assign-cookies/submissions/2174106737/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        int count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        return count;
    }
};
