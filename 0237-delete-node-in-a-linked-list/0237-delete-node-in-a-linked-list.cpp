/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * cur = node;
        ListNode * nex = node->next; 
        while(nex->next!=NULL){
            cur->val = nex->val;
            cur = nex; 
            nex = nex->next;
        }
        cur->val = nex->val;
        cur->next = NULL;
    }
};