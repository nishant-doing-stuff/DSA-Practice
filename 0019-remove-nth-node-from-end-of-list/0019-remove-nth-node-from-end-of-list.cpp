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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tempHead = new ListNode(-1,head);
        int val = recursion(tempHead,n);
        return tempHead->next;   
    }
    int recursion(ListNode* head,int n ){
        if(!head)
            return 0;
        int val = recursion(head->next,n);
        if(val==n)
            head->next = head->next->next;
        return val + 1;
    }
};