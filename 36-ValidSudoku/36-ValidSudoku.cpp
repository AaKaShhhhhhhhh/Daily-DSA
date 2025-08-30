// Last updated: 8/30/2025, 9:34:26 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ;  j < 9 ; j++){
                char c = board[i][j];
                if (c == '.') continue;
                string row = "r" + to_string(i) + c;
                string col = "c" + to_string(j) + c;
                string box = "b" + to_string(i/3) + to_string(j/3) +c;
                if (!seen.insert(row).second || 
                    !seen.insert(col).second || 
                    !seen.insert(box).second) 
                    return false;
            }
            }
             return true;
        }
       
    
};