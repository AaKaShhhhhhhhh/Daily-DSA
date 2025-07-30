// Last updated: 7/30/2025, 10:47:50 AM
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
       
        vector<string> board(n);
        vector<vector<string>> ans;
        string s(n,'.');
        for(int i=0 ; i<n ; i++){
            board[i] = s;

        }
        solve(board,ans,n,0);
        return ans;

        }
            bool issafe(vector<string> &board ,  int row , int col , int n){

        int duprow = row;
        int dupcol = col;

        while(row>=0 && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;

        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;

        }
        row = duprow;
        col = dupcol;
        while(row<n && col>=0){
            if(board[row][col]== 'Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<string>& board , vector<vector<string>>& ans , int n , int col){

        if( col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0 ;row<n ;row++){
            if(issafe(board,row,col,n)){
                board[row][col] = 'Q';
                solve(board,ans,n,col+1);
                board[row][col] = '.';

            }
        }
    }

        
     
    

};