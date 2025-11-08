// Last updated: 11/8/2025, 10:13:25 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        if(root == NULL)return false;
        if(root->val == targetSum && root->left==nullptr && root->right==nullptr)return true;
        if(root->left!=nullptr)root->left->val += root->val;
        if(root->right!=nullptr)root->right->val += root->val;
        return hasPathSum(root->left , targetSum)||hasPathSum(root->right , targetSum);


    }
};