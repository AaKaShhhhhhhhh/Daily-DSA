// Last updated: 7/30/2025, 10:46:58 AM
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        // long long sum = 0;
         int n = arr.size();
        // int mod = 1e9 + 7;
        // for(int i = 0; i<n ; i++){
        //     int min = arr[i];
        //     for(int j = i; j<n ; j++){
               
        //             min = std::min(min, arr[j]);
        //             sum = (sum +min)% mod;
                

        //     }
        // }
        // return sum;
        vector<int> prev(n),next(n);
        stack<int> st;
        int mod = 1e9+7;

        for(int i=0; i<n ;++i){

            while(!st.empty() && arr[st.top()] >arr[i]){
                st.pop();
            }

            prev[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        st = stack<int>();
        for(int i = n-1 ; i>=0 ; --i){
             while(!st.empty() && arr[st.top()] >=arr[i]){
                st.pop();
            }

            next[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long res = 0;
        for(int i =0 ; i<n ; i++){
            long long left = i - prev[i];
            long long right = next[i] - i;
            res = (res + (1LL*arr[i] * left % mod) * right % mod) % mod;
        }
        return(int) res;
    }
};