// Last updated: 10/11/2025, 8:40:26 PM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for(int i = 1 ; i < left ; i++){
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        ListNode* prevnode = nullptr;
        ListNode* next = nullptr;

        for(int i = 0 ; i < right-left+1 ; i++){

            next = curr->next;
            curr->next = prevnode;
            prevnode = curr;
            curr = next;
        }

        prev->next->next = curr;
        prev->next = prevnode;
        
        return dummy->next;

    }
};