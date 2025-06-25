// Last updated: 6/25/2025, 10:27:57 AM
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
ListNode* reverse(ListNode* head , ListNode* end){
        ListNode* temp = head;
       ListNode* curr = head;
       ListNode* prev = nullptr;
        while(curr!=end){
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
            
        }
        return prev;
      }
    ListNode* reverseKGroup(ListNode* head, int k) {
      if (!head || k == 1) return head;
      
      ListNode* curr =head;
      ListNode* nexthead = nullptr;
      ListNode* prevtail = nullptr;

      while(curr!=NULL){
        ListNode* kth = curr;
        for(int i=1;i<k&&kth;++i){
            kth = kth->next;
        }
        if(kth==NULL){
            break;
        }
        ListNode* nextgrphead = kth->next;
        ListNode *reversehead = reverse(curr,kth->next);

        if(!nexthead)nexthead=reversehead;
        if(prevtail)prevtail->next=reversehead;

        prevtail=curr;
        curr->next=nextgrphead;
        curr = nextgrphead;
      }
       
       
       
        return nexthead ? nexthead : head;
    }
};