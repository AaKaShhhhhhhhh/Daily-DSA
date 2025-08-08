// Last updated: 8/8/2025, 12:30:49 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frq;
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> st;
        int n = nums.size();
        
        
        for(int i : nums){
            frq[i]++;
        }

        for(auto i : frq){
            st.push({i.second , i.first});
            if(st.size() > k){
                st.pop();
            }
            
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top().second);
            st.pop();       
        }
        return ans;
    }
};