/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : palindrome-number                                           ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 3, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/palindrome-number/submissions/2129711175/?envType=problem-list-v2&envId=math║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x != 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
    }
};