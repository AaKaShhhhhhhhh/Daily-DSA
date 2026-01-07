// Last updated: 1/7/2026, 10:25:44 PM
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
14    long long tsum = 0;
15    long long ans = 0;
16    static const int mod = 1e9 + 7;
17
18    int maxProduct(TreeNode* root) {
19        tsum = totalsum(root);
20         helper(root);
21        return ans%mod;
22    }
23
24    long long totalsum(TreeNode* root){
25        if(!root)return 0;
26        return root->val + totalsum(root->left) + totalsum(root->right);
27    }
28
29    long long helper(TreeNode* root){
30
31        if(!root)return 0;
32
33        long long left = helper(root->left);
34        long long right = helper(root->right);
35
36        long long sum = root->val + left + right;
37        ans = max(ans , sum *(tsum- sum));
38
39        return sum;
40    }
41};