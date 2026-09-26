/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : sqrtx                                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 26, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/sqrtx/submissions/2154180386/ ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        for(long long i = 1; i <= x; i++) {
            if(i * i == x) {
                return i;
            }
            if(i * i > x) {
                return i - 1;
            }
        }
        return ans;
    }
};