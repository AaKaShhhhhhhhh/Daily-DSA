// Last updated: 7/30/2025, 10:47:04 AM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> res(n,-1);
        
        for(int i=2*n-1 ; i>=0 ; --i){
            int idx = i %n;
            while(!st.empty()&& nums[st.top()] <= nums[idx]){
                st.pop();
                }
                if(i<n){
                    if(!st.empty()){
                        res[idx] = nums[st.top()];
                    }
                }
                   
            
             st.push(idx);
        }
        return res;
    }
};