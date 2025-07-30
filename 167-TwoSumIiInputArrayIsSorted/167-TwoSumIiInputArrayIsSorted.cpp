// Last updated: 7/30/2025, 10:47:24 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int low = 0;
        int high = numbers.size()-1;
        int i = 0 ; int j = 0;
        
        while(low<=high){

            if(numbers[low]+ numbers[high] == target)return {low+1,high+1};
            else if(numbers[low] + numbers[high] < target){
                low++;
                
            }
            else{
               high--;
            }
            //low++;
        }
        return {};
    }
};