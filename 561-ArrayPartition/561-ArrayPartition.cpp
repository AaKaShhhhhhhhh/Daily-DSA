// Last updated: 8/20/2025, 9:08:03 PM
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int sum = 0;
       int i = 0 ;
       int j = 1;
       while(j<nums.size()){
        if(nums[i]<=nums[j]){
            sum+=nums[i];
        }
        i = i+2;
        j = j+2;
       }
        return sum;
    }
};