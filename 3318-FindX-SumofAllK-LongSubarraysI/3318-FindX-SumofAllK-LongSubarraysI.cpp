// Last updated: 11/4/2025, 9:44:34 PM
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0 ; i+k <= n ; i++){
            unordered_map<int , int> freq;


            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }


            vector<pair<int,int>> arr;
            for(auto &p : freq){
                arr.push_back({p.first , p.second});
            }

       sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            if(a.second == b.second){
                return a.first > b.first;
            }else{
                return a.second > b.second;
            }
        });

        int sum = 0;
        for( int j = 0; j <x && j < arr.size() ; j++){
            sum+= arr[j].first*arr[j].second;
        }
        ans.push_back(sum);
        }
        return ans;

    }
};