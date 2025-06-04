// Last updated: 6/4/2025, 7:08:29 PM
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
      
       
        ListNode* next; 
        
        node->val=node->next->val;
        ListNode* temp = node->next;
       node->next=  node->next->next; 
        delete temp;
        
       // node->next=NULL;

    }
};