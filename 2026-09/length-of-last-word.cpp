/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : length-of-last-word                                         ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 24, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/length-of-last-word/submissions/2151560249/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int count = 0;
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};