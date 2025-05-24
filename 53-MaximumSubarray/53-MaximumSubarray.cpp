// Last updated: 5/25/2025, 12:02:10 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int i;
        int sum = 0;;

        for(i=0;i<nums.size();i++){
             sum+=nums[i];
            if(sum>maxi){
               maxi = sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};