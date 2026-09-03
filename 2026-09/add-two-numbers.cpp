/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : add-two-numbers                                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 3, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/add-two-numbers/submissions/2129710722/?envType=problem-list-v2&envId=math║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        
        int carry = 0;
        
        while (l1 != NULL || l2 != NULL || carry != 0) {
            
            int sum = carry;
            
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;
            
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        
        return dummy->next;
    }
};