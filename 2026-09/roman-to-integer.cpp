/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : roman-to-integer                                            ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 3, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/roman-to-integer/submissions/2129711969/?envType=problem-list-v2&envId=math║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            if (i + 1 < s.length() && values[s[i]] < values[s[i + 1]]) {
                
                ans -= values[s[i]];
            }
            else {
                ans += values[s[i]];
            }
        }

        return ans;
    }
};