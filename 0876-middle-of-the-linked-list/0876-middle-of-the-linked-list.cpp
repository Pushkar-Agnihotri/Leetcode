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
    ListNode* middleNode(ListNode* head) {
        ListNode* counter = head;
        int size = 0;
        while(counter){
            counter = counter->next;
            size++;
        }
        size = size%2 ? size+1 : size+2; 
        size/=2;
        size--;
        while(size--){
            head = head->next;
        }
        return head;
    }
};