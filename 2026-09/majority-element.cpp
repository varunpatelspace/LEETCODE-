/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : majority-element                                            ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 25, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/majority-element/submissions/2153066898/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
       for(int x : nums) {
        freq[x]++;
    }
    int maxFreq = 0;
    int maxElement = 0;

    for(auto x : freq) {
        if(x.second > maxFreq) {
            maxFreq = x.second;
            maxElement = x.first;
        }
    }
      return maxElement; 
    }
};