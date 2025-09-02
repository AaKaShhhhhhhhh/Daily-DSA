// Last updated: 9/2/2025, 9:47:23 PM
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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s; TreeNode* lastVisited = nullptr;
        vector<int> ans;
        while(!s.empty() || root != nullptr){
            if(root!=nullptr){
                s.push(root);
                root = root->left;
            }else {
    TreeNode* peek = s.top();
    if (peek->right != nullptr && lastVisited != peek->right) {
        root = peek->right; 
    } else {
        ans.push_back(peek->val); 
        s.pop();
        lastVisited = peek;
    }
}


        }
        return ans;
    }
};