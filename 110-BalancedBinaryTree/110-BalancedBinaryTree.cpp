// Last updated: 2/8/2026, 6:23:07 PM
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
14    int height(TreeNode* root){
15        if(!root)return 0;
16
17        int left = height(root->left);
18        if(left == -1)return -1;
19
20        
21        int right = height(root->right);
22        if(right == -1)return -1;
23
24        if(abs(left - right) > 1)return -1;
25
26        return max(left,right)+1;
27    }
28    bool isBalanced(TreeNode* root) {
29        return height(root) != -1;
30        
31    }
32};