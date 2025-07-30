// Last updated: 7/30/2025, 10:47:36 AM
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        sort(nums.begin(), nums.end());
        helper(nums, result , arr, 0);
        return result;
        
    }
        void helper(vector<int> &nums , vector<vector<int>>& result , vector<int>& arr, int i){
        if(i == nums.size()){
            result.push_back(arr);
           return;
        }
        arr.push_back(nums[i]);
        helper(nums, result , arr, i+1);
               arr.pop_back();

        

        int next = i+1;
        while(next<nums.size() && nums[next]==nums[i]){
            next++;
        }
        helper(nums, result , arr, next);
        
    }
};