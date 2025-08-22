// Last updated: 8/22/2025, 9:28:39 PM
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int rowx = -1; int rowmin = row;
        int colx = -1 ; int colmin = col;
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++){
                if(grid[i][j] == 1){
                    rowx = max(rowx , i);
                    colx = max(colx , j);
                    rowmin = min(rowmin , i);
                    colmin =min(colmin , j) ;
                }

            }
        }
        if(rowx == -1)return 0;
        return (rowx - rowmin + 1)*(colx - colmin +1);
    }
};