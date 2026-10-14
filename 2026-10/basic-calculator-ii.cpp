/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : basic-calculator-ii                                         ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/basic-calculator-ii/submissions/2172374852/?envType=problem-list-v2&envId=string║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    int calculate(string s) {
        int sum = 0, num = 0, last = 0;
        char op = '+';

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i]) && s[i] != ' ') ||
                i == s.size() - 1) {

                if (op == '+') {
                    sum += last;
                    last = num;
                }
                else if (op == '-') {
                    sum += last;
                    last = -num;
                }
                else if (op == '*') {
                    last *= num;
                }
                else if (op == '/') {
                    last /= num;
                }

                op = s[i];
                num = 0;
            }
        }

        return sum + last;
    }
};
