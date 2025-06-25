// Last updated: 6/25/2025, 10:27:48 AM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
        int count = 1;
        ListNode* curr = head;
        while(curr->next!=NULL){
            count++;
            curr = curr->next;
            
        }
        k = k%count;
        curr->next = head;
        int breakpoint = count-k;
        ListNode* newtail = head;
        for(int i=1; i<breakpoint ; i++){
             newtail = newtail->next;
        }
        
        ListNode* newhead = newtail->next;
        newtail->next = NULL;
        return newhead;
    }
};