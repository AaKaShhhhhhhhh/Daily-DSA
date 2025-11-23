// Last updated: 11/23/2025, 7:22:15 PM
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
       vector<int> dp(3 , -1e9);
        dp[0] = 0;
       for( int i : nums){
        vector<int> temp = dp;
        
        for(int j = 0 ; j < 3 ; j++){
            int r = (i+j)%3;
            temp[r] = max(temp[r] , dp[j]+i);
        }
        dp = temp;
       }
       return dp[0];
    }
};