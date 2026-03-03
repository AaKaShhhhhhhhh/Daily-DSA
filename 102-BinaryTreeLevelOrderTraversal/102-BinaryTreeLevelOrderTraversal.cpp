// Last updated: 3/3/2026, 5:54:59 PM
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        queue<TreeNode*> q;
16        vector<vector<int>> ans;
17        if(root == nullptr){
18                return ans;
19        }
20        TreeNode* curr = root;
21        q.push(root);
22        while(!q.empty()){
23            vector<int> arr;
24        int size = q.size();
25            
26        for(int i = 0 ; i < size ; i++){
27            TreeNode* curr = q.front();
28            q.pop();
29            arr.push_back(curr->val);
30            if(curr->left)q.push(curr->left);
31            if(curr->right)q.push(curr->right);
32        }
33        ans.push_back(arr);
34        
35        }
36        return ans;
37    }
38};