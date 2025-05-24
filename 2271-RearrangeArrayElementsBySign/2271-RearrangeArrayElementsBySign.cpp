// Last updated: 5/25/2025, 12:01:24 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i;
        vector<int> pos;
        vector<int> neg;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(i=0;i<nums.size()/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
    }
};