// Last updated: 6/15/2025, 8:54:54 PM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        int len1 = 0;
        int len2 = 0;
        for(p1=headA;p1->next!=NULL;p1=p1->next){
            len1++;
        }
        for(p2=headB;p2->next!=NULL;p2=p2->next){
            len2++;
        }
        int finlen = abs(len1-len2);
        if(len1>len2){
            for(int i=0 ; i<len1-len2;i++){
            ptr1 = ptr1->next;
        }}
        else{for(int i=0 ; i<len2-len1;i++){
            ptr2 = ptr2->next;
        }}
        
        
        
        while(ptr1!=ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            //and here i move the pinters ?
        }
        return ptr1;
    }
};