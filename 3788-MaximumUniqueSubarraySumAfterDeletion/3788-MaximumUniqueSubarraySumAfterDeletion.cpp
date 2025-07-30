// Last updated: 7/30/2025, 10:46:32 AM
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size(); int sum =0; ;
        unordered_set map(nums.begin(), nums.end());
        
        int maxi = *max_element(nums.begin() , nums.end());
        if(maxi < 0)return maxi;
        for(int i : map){
            if(i>0){
                sum+=i;
            }
            }
            return sum;
    }
};