// Last updated: 7/30/2025, 10:47:55 AM
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        helper(candidates , result,arr, target , 0);
        return result;
    }

    void helper(vector<int> &candidates , vector<vector<int>> &result, vector<int> arr,int target, int i){

        if(target==0){
            result.push_back(arr);
            return;
        }
        if(i==candidates.size())return;
        
        if(candidates[i]<=target){
            arr.push_back(candidates[i]);
            helper(candidates,result, arr, target-candidates[i], i+1);
            arr.pop_back();
        }
        int next = i+1;
        while(next<candidates.size() && candidates[next]==candidates[i]){
            next++;
        }
        
            helper(candidates,result, arr, target, next);
        
        
    }
};