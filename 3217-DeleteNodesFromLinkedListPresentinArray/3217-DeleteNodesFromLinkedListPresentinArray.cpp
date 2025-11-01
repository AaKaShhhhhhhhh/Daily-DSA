// Last updated: 11/1/2025, 10:18:15 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* ptr1;
        ListNode* ptr2;
        //ListNode* dummy = new ListNode(0);
        // for(ptr1 = nums ; ptr1 < nums.size() ; ptr1 = ptr1->next){
        //     for(ptr2 = head ; ptr2 < head.size() ; ptr2 = ptr2->next)
        //     if(ptr1 -> val != ptr2->val){

        //     }
        // }

        // unordered_set<int> set;
        // for(auto &p : nums){
        //     set[p]++;
        // }

        // for(int i : set){
        //     if(set.find(i) == head[i]){
        //         head.delete(i);
        //     }
        // }

        // return head;

        unordered_set<int> st(nums.begin(), nums.end());

        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* curr = dummy;

        while(curr->next!=nullptr){
            if(st.find(curr->next->val) != st.end()){
                ListNode* temp = curr->next;
                curr->next = temp->next;
                
            }else{
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};