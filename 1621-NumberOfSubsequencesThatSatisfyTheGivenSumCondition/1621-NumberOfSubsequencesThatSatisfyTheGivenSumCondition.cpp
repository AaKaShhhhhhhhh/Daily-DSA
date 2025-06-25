// Last updated: 6/25/2025, 10:27:13 AM
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());



        int low = 0 ; int high = nums.size()-1; int cnt=0;
        const int MOD = 1e9 + 7;
                vector<int> power(nums.size(), 1);
            for (int i = 1; i < nums.size(); i++) {
                power[i] = (2LL * power[i - 1]) % MOD;
}
        while(low<=high){
            if(nums[low]+nums[high]<=target){
   
                cnt = (cnt + power[high - low]) % MOD;
                low++;
            }
            else{
                high--;
            }
           
        }
        return cnt;

    }

    
};