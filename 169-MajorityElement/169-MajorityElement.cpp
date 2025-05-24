// Last updated: 5/25/2025, 12:01:51 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums.size()-1;
        int mid = start+end/2;
        return nums[mid];

        
    }
};