// Last updated: 6/8/2025, 5:52:18 PM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev =  NULL;
        while(curr!=NULL){
            ListNode* nextnode = curr->next;
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;


           
            
        }
        return prev;
    }
};