// Last updated: 7/30/2025, 10:47:06 AM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> nxt;

        for(int i=nums2.size()-1;i>=0;--i){
            int num = nums2[i];
            while(!st.empty() && st.top()<=num){
                st.pop();
            }
            nxt[num] = st.empty() ? -1 : st.top();
            st.push(num);

        }
        vector<int> res;
        for(int n : nums1){
            res.push_back(nxt[n]);
        }
        return res;
    }
};