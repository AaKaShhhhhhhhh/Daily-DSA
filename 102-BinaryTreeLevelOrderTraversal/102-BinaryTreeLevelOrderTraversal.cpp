// Last updated: 9/3/2025, 9:08:37 PM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root == nullptr){
                return ans;
        }
        TreeNode* curr = root;
        q.push(root);
        while(!q.empty()){
            vector<int> arr;
        int size = q.size();
            
        for(int i = 0 ; i < size ; i++){
            TreeNode* curr = q.front();
            q.pop();
            arr.push_back(curr->val);
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
        ans.push_back(arr);
        
        }
        return ans;
    }
};