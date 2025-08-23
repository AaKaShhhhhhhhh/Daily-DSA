// Last updated: 8/23/2025, 8:08:59 PM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans=0 ;
        long long cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                cnt++;
                ans+=cnt;
            }else{
                cnt = 0;
            }
        }
        return ans;
    }
};