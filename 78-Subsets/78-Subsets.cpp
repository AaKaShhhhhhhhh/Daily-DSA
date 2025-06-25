// Last updated: 6/25/2025, 10:27:44 AM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> result;

        helper(nums , arr , result , 0 );
        return result;
    }
    void helper(vector<int>& nums , vector<int> arr,vector<vector<int>> &result , int i ){
        if(i==nums.size()){
            result.push_back(arr);
            return;
        }
       
              
            helper(nums,arr,result, i+1 ); 
        
            arr.push_back(nums[i]);
            helper(nums,arr,result,i+1);
        

    }
};