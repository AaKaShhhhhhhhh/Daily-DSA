// Last updated: 5/25/2025, 12:01:43 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        
        int n = nums.size();
        int count= n*(n+1)/2;
        for(int i : nums){
            sum = sum+i;
        }
        return count-sum;
       

        

    }
};