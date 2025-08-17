// Last updated: 8/17/2025, 11:34:37 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
         int farthest = 0;
        for(int i = 0; i< n ; i++){
            if(i>farthest){
                return false;
            }
            farthest = max(farthest , i+nums[i]);
            

            // for(int j= 0 ; j<temp ; j++){
            //     if(j != n-1){
            //         return false;
                   
            //     }
            // }
        }
        return true;
    }
};