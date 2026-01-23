// Last updated: 1/23/2026, 8:08:19 PM
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
13    ListNode* removeZeroSumSublists(ListNode* head) {
14        
15        // vector<int> arr;
16        // ListNode* ptr;
17        // ListNode* dummy(0);
18        // int sum = 0;
19
20        // for( ptr = head ;ptr->next!=nullptr ; ptr=ptr->next){
21
22        //     arr.push_back(ptr->val);
23        // }
24
25        // for(int i = 0 ; i < arr.size(); i++){
26        //     if(arr[i] + arr[i+1] == 0){
27        //         arr.erase(arr.begin() + i , arr.begin() + i + 2);
28        //     }
29            
30            
31        //     if(arr[i] + sum == 0){
32        //         arr.erase(arr.begin() + i);
33        //         sum = 0;
34        //     }
35        //     sum += arr[i];
36
37        // }
38
39        // for(int i : arr){
40            
41        //     dummy->next->val = i;
42        // }
43
44        // return dummy->next;
45
46        unordered_map<int, ListNode*> map;
47
48        int sum = 0;
49        ListNode* dummy = new ListNode(0);
50        dummy->next = head;
51
52        for(ListNode* ptr = dummy ; ptr!=nullptr ; ptr=ptr->next){
53            sum += ptr->val;
54            map[sum] = ptr;
55        }
56
57        sum = 0;
58        for(ListNode* ptr = dummy ; ptr!=nullptr ; ptr=ptr->next){
59            sum += ptr->val;
60            ptr->next = map[sum]->next;
61        }
62        return dummy->next;
63    }
64};