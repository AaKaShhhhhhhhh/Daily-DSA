// Last updated: 8/18/2025, 8:33:33 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int cnt = 0; int n = nums.size(); int longg = 0; int shortt =0 ;
        for(int i = 0 ; i < n-1 ; i++){
           longg = max(longg , i+nums[i]);
           if(shortt == i){
            cnt++;
            shortt = longg;
           }
            
        }
        return cnt;
    }
};