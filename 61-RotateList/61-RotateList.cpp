// Last updated: 5/5/2026, 9:10:18 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(!head || !head->next || k==0)return head;
15        int count = 1;
16        ListNode* curr = head;
17        while(curr->next!=NULL){
18            count++;
19            curr = curr->next;
20            
21        }
22        k = k%count;
23        curr->next = head;
24        int breakpoint = count-k;
25        ListNode* newtail = head;
26        for(int i=1; i<breakpoint ; i++){
27             newtail = newtail->next;
28        }
29        
30        ListNode* newhead = newtail->next;
31        newtail->next = NULL;
32        return newhead;
33    }
34};