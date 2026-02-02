// Last updated: 2/2/2026, 9:17:15 PM
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
14    int sumNumbers(TreeNode* root) {
15        return dfs(root,0);
16
17        
18    }
19    int dfs(TreeNode* root ,  int curr){
20
21        if(!root)return 0;
22
23        curr = curr*10 + root->val;
24
25        if(!root->left && !root->right){
26            return curr;
27           
28        }
29        return  dfs(root->left , curr) + dfs(root->right , curr);
30
31    }
32};