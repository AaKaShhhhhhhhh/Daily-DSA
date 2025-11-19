// Last updated: 11/19/2025, 1:25:07 PM
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i : nums)sum+=i;
        if(sum%2)return false;
        int target = sum/2;

        vector<bool> dp(target+1 , false);
        dp[0] = true;

        for(int i : nums){
            for(int j = target ; j>=i ; j--){
                dp[j] = dp[j] || dp[j-i];
            }
        }
        return dp[target];
    }
};