/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : unique-3-digit-even-numbers                                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 11, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/unique-3-digit-even-numbers/submissions/2138599572/?envType=daily-question&envId=2026-09-11║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count = 0;
        bool used[1000] = {};

        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {

                    if (i == j || j == k || i == k)
                        continue;

                    if (digits[i] == 0)
                        continue;

                    if (digits[k] % 2 != 0)
                        continue;

                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];

                    if (!used[num]) {
                        used[num] = true;
                        count++;
                    }
                }
            }
        }

        return count;
    }
};