// Last updated: 5/25/2025, 12:02:08 AM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
       vector<vector<int>> ans;
        
        for(int i =0; i<intervals.size();i++){
           // int start = intervals[i][0];
           // int end = intervals[i][1];
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
                
            }
            else{
                ans.back()[1] = std::max(ans.back()[1] , intervals[i][1]);
            }

        }
        return ans ;
        
    }
};