// Last updated: 10/30/2025, 9:12:14 PM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i = nums[0] ;
         int j = 1;
         int temp = -1;
         int n = nums.size();
        
         while(j < n){
            if(i  < nums[j]){
                temp = max(temp , nums[j] - i);    
            }
            else{
                i = nums[j];
            }
            
            j++;
         }
         
         return temp;
    }
};