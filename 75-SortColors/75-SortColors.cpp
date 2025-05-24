// Last updated: 5/25/2025, 12:02:03 AM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int x = 0;
        while(x<=right){
            if(nums[x]==0){
              swap(nums[x],nums[left]);
              left++;
              x++;
            }
            else if(nums[x]==2){
                swap(nums[x],nums[right]);
                right--;
               
            }
           else{
            x++;
           }
            
        }
    

    }
};