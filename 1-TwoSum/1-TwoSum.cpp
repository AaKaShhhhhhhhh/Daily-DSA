// Last updated: 5/25/2025, 12:02:22 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int i;
     int j;
     vector<int> ans;
     for(i=0;i<nums.size(); i++){
        for(j=i+1 ; j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
     }
     return {-1,-1};
    }
};