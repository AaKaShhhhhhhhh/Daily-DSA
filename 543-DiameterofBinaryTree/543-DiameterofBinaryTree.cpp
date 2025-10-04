// Last updated: 10/4/2025, 7:08:07 PM
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
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root == nullptr){
        //     return 0;
        // }
        int dia =0;
        height(root , dia);
        return dia;
    }

    int height(TreeNode* root , int &diameter){
        if(root == nullptr){
            return 0;

        }
        
        int left = height(root->left , diameter);
        int right = height(root->right , diameter);
        diameter = max(diameter , left+right);
        return 1+max(left,right);
    }
};