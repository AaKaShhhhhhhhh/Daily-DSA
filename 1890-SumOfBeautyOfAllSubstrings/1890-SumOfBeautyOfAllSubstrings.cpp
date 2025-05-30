// Last updated: 5/30/2025, 6:02:06 PM
class Solution {
public:
    int beautySum(string s) {
        int n = s.length(); int sum=0;
       
        for(int i=0;i<n ;i++){
             vector<int>  arr(26,0);
            for(int j=i;j<n ; j++){
                arr[s[j] - 'a']++; 
                int maxi = INT_MIN;
                 int mini = INT_MAX;
               // if(s[i]==s[j]){
                   
             //   }
                for (int k = 0; k < 26; k++) {
                    if (arr[k] > 0) {
                        maxi = max(maxi, arr[k]);
                        mini = min(mini, arr[k]);
                    }
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};