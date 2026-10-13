/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-the-index-of-the-first-occurrence-in-a-string          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 13, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/2171296758/?envType=problem-list-v2&envId=string║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);

        if (pos == string::npos)
            return -1;

        return static_cast<int>(pos);
    }
};
