/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : reverse-integer                                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 3, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/reverse-integer/submissions/2129710918/?envType=problem-list-v2&envId=math║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;

            if (rev > INT_MAX / 10 ||
                (rev == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            if (rev < INT_MIN / 10 ||
                (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            rev = rev * 10 + digit;
        }

        return rev;
    }
};