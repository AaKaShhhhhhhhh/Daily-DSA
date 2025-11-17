// Last updated: 11/17/2025, 11:25:48 AM
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                if(cnt != -1 && i-cnt-1 < k){
                    return false;
                }
                cnt = i;
            }
        }
        return true;
    }
};