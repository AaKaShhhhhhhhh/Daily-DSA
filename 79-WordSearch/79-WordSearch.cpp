// Last updated: 2/28/2026, 9:28:22 PM
1class Solution {
2public:
3    bool exist(vector<vector<char>>& board, string word) {
4        
5        int index = 0;
6        for(int i=0;i<board.size();i++){
7            for(int j=0;j<board[0].size(); j++){
8                if(board[i][j] == word[0]){
9                    if(helper(board,word,i,j,index))return true;
10                    
11                }
12            }
13        }
14        return false;
15    }
16
17    bool helper(vector<vector<char>>& board, string word, int row, int col , int i){
18        if(i == word.size()){
19            return true;
20        }
21
22        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size()
23           || board[row][col]!=word[i] || board[row][col]=='!' ){
24            return false;
25        }
26       char c = board[row][col];
27       board[row][col] = '!';
28
29       bool top = helper(board,word,row-1,col,i+1);
30       bool bottom = helper(board,word,row+1,col,i+1);
31       bool right = helper(board,word,row,col+1,i+1);
32       bool left = helper(board,word,row,col-1,i+1);
33
34        board[row][col] = c;
35        return top||bottom||left||right;
36
37    }
38};