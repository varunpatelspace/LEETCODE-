/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : longest-common-prefix                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 15, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/longest-common-prefix/submissions/2142600994/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty()) {
            return "";
        }

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        int i = 0;

        while (i < first.length() &&
               i < last.length() &&
               first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};