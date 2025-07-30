// Last updated: 7/30/2025, 10:47:08 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int left = 0; int right=0; int maxlen = 0;;int maxf = 0;
        unordered_map<char ,int> check ;
        for(right = 0; right<n; right++){

             check[s[right]]++;
            maxf = max(maxf, check[s[right]]);

            if((right-left+1)-maxf > k){
                 check[s[left]]--;
                left++;
            }
            
           //else{left++;
          

            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};