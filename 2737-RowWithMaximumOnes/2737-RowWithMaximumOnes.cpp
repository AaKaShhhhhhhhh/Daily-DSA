// Last updated: 5/25/2025, 12:01:23 AM
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
     int cntmax = 0; int index = 0;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0 ;j<m; j++){
                cnt += mat[i][j];
                }
                if(cnt > cntmax){
                    cntmax= cnt;
                    index = i;
                }

            
            
        }
        return {index, cntmax};
        
    }
};