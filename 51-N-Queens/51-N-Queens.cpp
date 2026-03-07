// Last updated: 3/7/2026, 10:14:31 PM
1class Solution {
2public:
3    vector<vector<string>> solveNQueens(int n) {
4       
5        vector<string> board(n);
6        vector<vector<string>> ans;
7        string s(n,'.');
8        for(int i=0 ; i<n ; i++){
9            board[i] = s;
10
11        }
12        solve(board,ans,n,0);
13        return ans;
14
15        }
16            bool issafe(vector<string> &board ,  int row , int col , int n){
17
18        int duprow = row;
19        int dupcol = col;
20
21        while(row>=0 && col>=0){
22            if(board[row][col] == 'Q'){
23                return false;
24            }
25            row--;
26            col--;
27        }
28        row = duprow;
29        col = dupcol;
30
31        while(col>=0){
32            if(board[row][col] == 'Q'){
33                return false;
34            }
35            col--;
36
37        }
38        row = duprow;
39        col = dupcol;
40        while(row<n && col>=0){
41            if(board[row][col]== 'Q'){
42                return false;
43            }
44            row++;
45            col--;
46        }
47        return true;
48    }
49    void solve(vector<string>& board , vector<vector<string>>& ans , int n , int col){
50
51        if( col == n){
52            ans.push_back(board);
53            return;
54        }
55        for(int row = 0 ;row<n ;row++){
56            if(issafe(board,row,col,n)){
57                board[row][col] = 'Q';
58                solve(board,ans,n,col+1);
59                board[row][col] = '.';
60
61            }
62        }
63    }
64
65        
66     
67    
68
69};