"""
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : excel-sheet-column-number                                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 15, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/excel-sheet-column-number/submissions/2173199185/║
 ╚═══════════════════════════════════════════════════════════════════════╝
"""

class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        result = 0
        for char in columnTitle:
            value = ord(char) - ord('A') + 1
            result = result * 26 + value
            
        return result 