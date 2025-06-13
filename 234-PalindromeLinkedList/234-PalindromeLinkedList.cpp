// Last updated: 6/13/2025, 5:37:23 PM
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
            if (!head || !head->next) return true;

        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = NULL;
        ListNode* curr = slow;
        
        while(curr){
            ListNode* nextNode = curr->next;
            curr->next = temp;
            temp = curr;
            curr= nextNode;
        }
        ListNode* first = head;
        ListNode* second = temp;
        while(second){
            if(first->val!=second->val){
                return false;

            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};