// Last updated: 1/19/2026, 10:26:53 PM
1class Solution {
2public:
3    void reorderList(ListNode* head) {
4        if (!head || !head->next) return;
5
6        
7        ListNode* slow = head;
8        ListNode* fast = head;
9
10        while (fast->next && fast->next->next) {
11            slow = slow->next;
12            fast = fast->next->next;
13        }
14
15        
16        ListNode* prev = nullptr;
17        ListNode* curr = slow->next;
18        slow->next = nullptr;  
19
20        while (curr) {
21            ListNode* nextNode = curr->next;
22            curr->next = prev;
23            prev = curr;
24            curr = nextNode;
25        }
26
27        
28        ListNode* first = head;
29        ListNode* second = prev;
30
31        while (second) {
32            ListNode* t1 = first->next;
33            ListNode* t2 = second->next;
34
35            first->next = second;
36            second->next = t1;
37
38            first = t1;
39            second = t2;
40        }
41    }
42};
43