// Last updated: 8/31/2025, 12:54:42 PM
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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk ; 
        vector<int> ans;
        if (root == nullptr)
        return ans;

        stk.push(root);
        while(!stk.empty()){
            TreeNode *curr = stk.top();
            stk.pop();
            ans.push_back(curr->val);
            if(curr->right != nullptr)stk.push(curr->right);
            
           if(curr->left != nullptr)stk.push(curr->left);

        }
        return ans;
    }
};