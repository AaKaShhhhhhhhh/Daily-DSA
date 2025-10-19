// Last updated: 10/19/2025, 10:53:37 PM
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);

        ListNode* nextt = dummy1; 
        ListNode* prev = dummy2;
        while(head!=nullptr){
            if(head->val < x){
                prev -> next = head;
                prev = prev->next;

            }else{
                nextt -> next = head;
                nextt = nextt->next;
            }
            head = head->next;

        }
        nextt -> next = nullptr;
        prev-> next = dummy1->next;

        ListNode* res = dummy2->next;

        delete dummy1;
        delete dummy2;

        return res;

    }
};