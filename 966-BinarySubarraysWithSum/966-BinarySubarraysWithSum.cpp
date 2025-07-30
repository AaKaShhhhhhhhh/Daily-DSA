// Last updated: 7/30/2025, 10:46:59 AM
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return cntsub(nums,goal)-cntsub(nums,goal-1);
    }
private:
    int cntsub(vector<int>& nums, int goal){
        int left = 0;
        int right = 0;
        int n = nums.size();
        int cnt = 0;int sum =0;
        if(goal<0)return 0;
        for(right=0 ; right<n ; right++){
            sum+=nums[right];
            while(sum > goal){
                sum-=nums[left++];
            }
            cnt+=right-left+1;
        }
        return cnt;
    }
};