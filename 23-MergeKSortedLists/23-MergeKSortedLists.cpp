// Last updated: 8/23/2025, 8:10:44 PM
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

 struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;  // min-heap
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> qu;
        for(auto i : lists){
            if(i)qu.push(i);
        }

        ListNode Dummy(0);
        ListNode* tail = &Dummy;

        while(!qu.empty()){

            ListNode* curr = qu.top();
            qu.pop();

            tail->next= curr;
            tail = tail->next;

            if(curr->next)qu.push(curr->next);
        }


        return Dummy.next;


    }
};