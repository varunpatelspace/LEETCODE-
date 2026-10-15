"""
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : subarrays-distinct-element-sum-of-squares-i                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 15, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/submissions/2173193025/?envType=daily-question&envId=2026-10-15║
 ╚═══════════════════════════════════════════════════════════════════════╝
"""

class Solution(object):
    def sumCounts(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        subarrays = []
        n = len(nums)
        for i in range(n):
            for j in range(i, n):
                subarrays.append(nums[i:j+1])
        total_sum = 0
        for sub in subarrays:
            distinct_count = len(set(sub))
            sq_of_count = distinct_count ** 2
            total_sum += sq_of_count
        return total_sum