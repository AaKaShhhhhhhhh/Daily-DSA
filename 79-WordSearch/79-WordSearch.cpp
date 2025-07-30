// Last updated: 7/30/2025, 10:47:39 AM
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int index = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size(); j++){
                if(board[i][j] == word[0]){
                    if(helper(board,word,i,j,index))return true;
                    
                }
            }
        }
        return false;
    }

    bool helper(vector<vector<char>>& board, string word, int row, int col , int i){
        if(i == word.size()){
            return true;
        }

        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size()
           || board[row][col]!=word[i] || board[row][col]=='!' ){
            return false;
        }
       char c = board[row][col];
       board[row][col] = '!';

       bool top = helper(board,word,row-1,col,i+1);
       bool bottom = helper(board,word,row+1,col,i+1);
       bool right = helper(board,word,row,col+1,i+1);
       bool left = helper(board,word,row,col-1,i+1);

        board[row][col] = c;
        return top||bottom||left||right;

    }
};