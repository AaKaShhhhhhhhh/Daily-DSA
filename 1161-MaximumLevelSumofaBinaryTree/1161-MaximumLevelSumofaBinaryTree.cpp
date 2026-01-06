// Last updated: 1/6/2026, 8:09:11 PM
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
14    int maxLevelSum(TreeNode* root) {
15
16        int level = 0;
17
18        queue<TreeNode*> q;
19        if(root!=nullptr)
20        q.push(root);
21
22        int maxsum ;
23        int ans = 0;
24
25        while(!q.empty()){
26            int n = q.size();
27            int lvlsum = 0;
28            
29          
30              for(int i= 0 ; i < n ; i++){
31                TreeNode* curr = q.front();
32                q.pop();
33                lvlsum += curr->val;
34                if(curr->left!=nullptr)
35                q.push(curr->left);
36                if(curr->right!=nullptr)
37                q.push(curr->right);
38              }
39               level++;
40
41              if(lvlsum > maxsum){
42                maxsum = lvlsum ;
43                ans = level;
44              }
45             
46
47        }
48        return ans;
49
50        // for(int i = 0 ; i < n ; i++){
51        //     q.pop(i);
52        //     sum+= q[i];
53        //     if(root->left!=nullptr){
54        //         q.push(root->left);
55        //     }
56        // }
57
58
59    }
60};