/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-first-and-last-position-of-element-in-sorted-array     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 7, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/2133634997/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        left = 0;
        right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return {first, last};
    }
};