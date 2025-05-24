// Last updated: 5/25/2025, 12:01:19 AM
class Solution {
public:
    int maxcolele(vector<vector<int>>& mat, int n, int m, int col){
        int maxele = -1;
        int index = -1;
        for(int i = 0; i<n;i++){
            if(mat[i][col]>maxele){
                index = i;
                maxele = mat[i][col];

            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m  = mat[0].size();

        int low = 0; 
        int high = m-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            int maxind = maxcolele(mat,n,m,mid);
           int left = mid-1>=0 ? mat[maxind][mid-1] : -1;
           int right = mid+1<m ? mat[maxind][mid+1] : -1;
           if(mat[maxind][mid]>left && mat[maxind][mid]>right){
            return {maxind,mid};
           }
           else if(mat[maxind][mid]<left){
            high = mid-1;
           }
           else{
            low = mid+1;
           }
        }
            return {-1,-1} ;

    }
};