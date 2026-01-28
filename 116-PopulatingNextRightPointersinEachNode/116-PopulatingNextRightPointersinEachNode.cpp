// Last updated: 1/28/2026, 8:51:29 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22       
23       
24       if(root == NULL)return NULL;
25       Node* leftmost = root;
26
27       while(leftmost->left!=NULL){
28
29            Node* curr = leftmost;
30            
31
32        while(curr!=nullptr){
33
34            curr->left->next = curr->right;
35
36        if(curr->next!=nullptr){
37            curr->right->next = curr->next->left;
38
39        }
40        curr = curr->next;
41           
42        }
43        leftmost = leftmost->left;
44
45       }
46       return root;
47
48    }
49};