// Last updated: 7/30/2025, 10:46:55 AM
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums ,k)-helper(nums,k-1);
    }
private:
    int helper(vector<int>& nums, int k){
        int n = nums.size();
        int left = 0;
        int right = 0;
        int cnt = 0;int result =0;
        unordered_map<int,int> seen;
        for(right = 0 ; right<n ; right++){
            seen[nums[right]]++;

        if(seen[nums[right]] == 1){
            cnt++;

        }
    
            while(cnt>k){
                seen[nums[left]]--;
               if(seen[nums[left]] ==0)cnt--;
               left++; 
            }
            result+= (right-left+1);
        }
        return result;
    }
};