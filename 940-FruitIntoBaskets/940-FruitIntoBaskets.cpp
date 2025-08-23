// Last updated: 8/23/2025, 8:09:19 PM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxi = 0;
        int left = 0;
        int right = 0;
        unordered_map<int,int> freq;
        for(right =0; right<n ; right++){
            freq[fruits[right]]++;
            
            while(freq.size()>2){

                freq[fruits[left]]--;
                if(freq[fruits[left]]==0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            maxi = max(maxi,right-left+1);
        }
        return maxi;
    }
};