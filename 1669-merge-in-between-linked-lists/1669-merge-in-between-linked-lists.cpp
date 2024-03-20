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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* a_node,* b_node;
        ListNode* ptr = list1;
        a--;b++;
        while(a--){
            ptr = ptr->next;
        }
        a_node = ptr;
        ptr = list1;
        while(b--){
            ptr = ptr->next;
        }
        b_node = ptr;
        a_node->next = list2;
        while(a_node -> next){
            a_node = a_node->next;
        }
        a_node->next = b_node;
        return list1;
    }
};