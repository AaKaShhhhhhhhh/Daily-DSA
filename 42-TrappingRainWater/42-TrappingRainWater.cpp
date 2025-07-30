// Last updated: 7/30/2025, 10:47:53 AM
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int> st;
        int ans = 0;
        for(int i=0 ; i<n ;i++){
            while(!st.empty() && height[i] > height[st.top()]){
                int top = st.top();
                st.pop();

                if(st.empty())break;

                int dis =  i - st.top() -1;
                int bh = min(height[i] , height[st.top()] )- height[top];
                ans += dis*bh;
            }
            st.push(i);
        }
        return ans;
    }
};