/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next) //keeps fast at last point and slow at half of list
            slow = slow->next, fast = fast->next->next;
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow)//reverse half list
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        fast = head, slow = prev; //fast at first node slow at last node of reverse list
        while (slow)
            if (fast->val != slow->val) return false;//check for invalid condition
            else fast = fast->next, slow = slow->next;
        return true;
    }
};