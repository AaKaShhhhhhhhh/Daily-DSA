// Last updated: 7/30/2025, 10:46:35 AM
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
       vector<int> newa;
       newa.push_back(nums[0]);
       for(int i=1; i<n ;i++){
        if(nums[i] !=nums[i-1]){
            newa.push_back(nums[i]);
        }
       }
        for(int i=1; i<newa.size()-1 ; i++){
           if(newa[i]>newa[i-1]&& newa[i]>newa[i+1] || 
           newa[i]<newa[i-1]&& newa[i]<newa[i+1]){
            cnt++;
           }
               
            }
        return cnt;
    }
};