// Last updated: 1/9/2026, 9:29:06 PM
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
14    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
15        return helper(root).second;
16        
17    }
18    pair<int,TreeNode*> helper(TreeNode* root){
19
20        if(!root)return {0 , nullptr};
21
22        auto left = helper(root->left);
23        auto right = helper(root->right);
24
25        if(left.first == right.first)
26        return {left.first+1, root};
27
28        else if(left.first > right.first)
29        return {left.first+1, left.second};
30
31        else{
32            return {right.first+1 , right.second};
33        }
34
35
36    }
37};