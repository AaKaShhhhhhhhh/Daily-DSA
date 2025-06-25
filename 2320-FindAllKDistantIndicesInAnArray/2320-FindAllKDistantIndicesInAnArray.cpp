// Last updated: 6/25/2025, 10:27:07 AM
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> arr;
        // 
       // int i = 0; 
       // int j = i;
        // while(i<=nums.size() && j<=nums.size()){
        //     if(nums[j] == key && abs(i-j)<=k){
        //         arr.push_back(i);
        //         j++;
        //     }
        //     else{
        //         j++;
        //     }
        //     i++;
            
        // }
        for(int i=0 ; i<nums.size() ;i++){
            for(int j=0 ; j<nums.size() ; j++){
                if(nums[j] == key && abs(i-j)<=k){
                    arr.push_back(i);
                    break;
                }
            }
        }
        return arr;
    }
};