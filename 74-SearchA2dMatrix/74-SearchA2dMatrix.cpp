// Last updated: 5/25/2025, 12:02:04 AM
class Solution {
public:
    // int findtar(vector<vector<int>>& mat, int mid){
    //     int n = mat.size();
    //     int m = mat[0].size();
    //     for(int i=0;i<n;i++){
    //         for(int j=0; j<m ;j++){
    //             if()
    //         }
    //     }
    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
         int m = matrix[0].size();
        int low = 0; int high = (n*m)-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int row = mid/m ; int col = mid%m;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                low = mid+1;               
            }
            else{
                high = mid-1;
            }
        }
        return false;
    }
};