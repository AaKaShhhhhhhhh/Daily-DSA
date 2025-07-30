// Last updated: 7/30/2025, 10:47:57 AM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> arr;
        helper(candidates, result,arr , 0,target);
        return result;
    }

    void helper(vector<int>& candidates , vector<vector<int>>& result, vector<int> arr,int index , int target){
        
        if(target==0){
           result.push_back(arr);
            return;

        }
        if(index == candidates.size())return;
            if(candidates[index]<=target){
                arr.push_back(candidates[index]);
            helper(candidates, result, arr, index, target-candidates[index]);
            arr.pop_back();
            }
            
            //
            helper(candidates, result, arr, index+1,target);
            
    }
};