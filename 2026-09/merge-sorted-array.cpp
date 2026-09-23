/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : merge-sorted-array                                          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 23, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/merge-sorted-array/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = 0; j < n; j++) {
            nums1[m + j] = nums2[j];
        }
        int total = m + n;

        for(int i = 0; i < total - 1; i++) {
            for(int j = 0; j < total - i - 1; j++) {

                if(nums1[j] > nums1[j + 1]) {
                    int temp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = temp;
                }

            }
        }
    }
};