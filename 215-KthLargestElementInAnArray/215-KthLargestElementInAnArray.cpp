// Last updated: 8/23/2025, 8:09:44 PM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> pri;

        for(int i:nums){
            pri.push(i);
        }

        for(int i = 0 ; i< k-1; i++){
            pri.pop();
        }
        return pri.top();
    }
};