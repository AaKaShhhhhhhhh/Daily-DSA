// Last updated: 9/26/2025, 10:25:48 PM
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
       // int s1 = 0; 
      //  int s2 = 0;
      sort(nums.begin() , nums.end());
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1; j< nums.size() ; j++){
              int sum =   nums[i] + nums[j];
              int k = lower_bound(nums.begin() + j + 1, nums.end(), sum) - nums.begin();  
                cnt += (k - j - 1);            }
        }
        // for(int i = 0 ; i < nums.size() ; i++){
        //     if(nums[s1] + nums[s2] > nums[i]){
        //         cnt++;
        //     }
        //     s1++;
        //     s2++;
        // }
        return cnt;
    }
};