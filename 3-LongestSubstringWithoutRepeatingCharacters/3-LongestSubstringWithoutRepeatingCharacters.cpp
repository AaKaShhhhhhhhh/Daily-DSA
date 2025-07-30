// Last updated: 7/30/2025, 10:48:12 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int n = s.length();
        // for(int i = 0; i<s.length() ; i++){
        //    int l = 0 ; 
        //    int r = s[i];
        //    if(i>0 && s[i] != s[i-1]){
        //     l++; 
        //     cnt++;
        //    }
        // }
        // return cnt;
        int left = 0; 
        int right = 0; 
        unordered_set<char> check;
        while(right < n){
           // if(s.empty())return 1;
            if(check.find(s[right]) == check.end()){
                check.insert(s[right]); 
                maxlen = max(maxlen , right-left+1);
                right++;
                

            }
            else{
                check.erase(s[left]);
                left++;
            }
            
        }
        return maxlen;
    }
};