// Last updated: 11/22/2025, 3:07:20 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(); int cnt = 0;

        for(int i =0 ; i < n ; i++){
            if(nums[i] %3 ==0)continue;
            else if(((nums[i] + 1) % 3 == 0) || ((nums[i] - 1) % 3 == 0)){
                cnt++;
            }
        }
        return cnt;
    }
};