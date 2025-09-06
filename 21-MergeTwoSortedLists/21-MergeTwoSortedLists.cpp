// Last updated: 9/6/2025, 10:23:02 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode dummy;
       ListNode* tail = &dummy;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val < ptr2->val){
                tail->next = ptr1;
                ptr1 = ptr1->next;
            }else{
                tail->next = ptr2;
                ptr2 = ptr2->next;
            }
            tail = tail->next;
        }
        if (ptr1) tail->next = ptr1;
        else tail->next = ptr2;
        return dummy.next;
    }
};