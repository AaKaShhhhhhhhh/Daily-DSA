// Last updated: 2/8/2026, 8:11:42 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        
14        if(root == nullptr)return nullptr;
15
16        if(root == p || root == q){
17            return root;
18        }
19
20        TreeNode* left = lowestCommonAncestor(root->left ,p,q);
21        TreeNode* right = lowestCommonAncestor(root->right ,p,q);
22
23        if(left && right)
24         return root;
25
26        return left ? left : right;
27    }
28};