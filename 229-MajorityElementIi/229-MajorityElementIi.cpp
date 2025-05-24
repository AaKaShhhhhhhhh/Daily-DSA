// Last updated: 5/25/2025, 12:01:47 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp;
        for(int i=0;i<n;i++){
            int cnt=0;
            if(temp.size()==0||temp[0]!=nums[i]){
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;

                }
               
            }
             if(cnt>(n/3)){
                 temp.push_back(nums[i]);
                
            }
            }
            
                   if(temp.size()==2){break;}

        }
        return temp;
        
    }
};