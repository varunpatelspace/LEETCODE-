/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : maximum-nesting-depth-of-the-parentheses                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 28, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/?envType=daily-question&envId=2026-09-28║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int  result = 0;
        for(char x:s){
            if(x=='('){
                depth++;
                result = max(result,depth);
            }else if(x==')'){
                depth--;
            }
        }
        return result;
    }
};