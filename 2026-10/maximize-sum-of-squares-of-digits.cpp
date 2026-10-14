/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : maximize-sum-of-squares-of-digits                           ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 14, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/maximize-sum-of-squares-of-digits/?envType=daily-question&envId=2026-10-14║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num)
            return "";
        string ans = "";
        while (num > 0) {
            int digit = min(9, sum);
            ans += char('0' + digit);
            sum -= digit;
            num--;
        }
        return ans;
    }
};
