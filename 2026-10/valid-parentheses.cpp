/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : valid-parentheses                                           ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 1, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/valid-parentheses/submissions/2158931928/?envType=daily-question&envId=2026-10-01║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                if (s[i] == ')' && st.top() != '(') {
                    return false;
                }
                if (s[i] == '}' && st.top() != '{') {
                    return false;
                }
                if (s[i] == ']' && st.top() != '[') {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};