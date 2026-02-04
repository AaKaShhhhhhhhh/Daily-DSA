// Last updated: 2/4/2026, 8:05:04 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<int> rightSideView(TreeNode* root) {
15        vector<int> arr;
16        if (!root) return arr;
17
18        queue<TreeNode*> q;
19
20        q.push(root);
21        while(!q.empty()){
22            int size = q.size();
23           
24
25            for(int i = 0 ; i < size ; i++){
26                 TreeNode* curr = q.front();
27                 q.pop();
28
29                if( i == size - 1){
30                    arr.push_back(curr->val);
31                }
32
33                if(curr->left){
34                    q.push(curr->left);
35                }
36
37                if(curr->right){
38                    q.push(curr->right);
39                }
40            }
41        }
42
43        return arr;
44        
45    }
46};