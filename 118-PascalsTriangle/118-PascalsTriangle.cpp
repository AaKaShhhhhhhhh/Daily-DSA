// Last updated: 5/25/2025, 12:01:59 AM
class Solution {
public:
    vector<int> ncr(int row){
        long long res=1;
        vector<int> ans;
        ans.push_back(1);
        for(int col =1;col<row;col++){
            res=res*(row-col);
            res=res/(col);
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int row=1; row<=numRows;row++){
            ans.push_back(ncr(row));
            
            }
            return ans;
        }
    };
    
