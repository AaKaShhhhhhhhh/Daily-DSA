// Last updated: 7/30/2025, 10:47:42 AM
class Solution {
public:
    string minWindow(string s, string t) {
        int n  = s.length(); 
        int m = t.length();
        
        int cnt = 0;
        int minlen = INT_MAX;;
        int start =0;
        int left = 0 ; int right = 0;
        unordered_map<char, int> target;
        for(char c:t)target[c]++;
        while(right<n){
            if(target[s[right]]>0)m--;
            target[s[right]]--;
            right++;

            while(m==0){
                  if (right - left  < minlen) {
                    minlen = right - left ;
                    start = left;
                }
                 target[s[left]]++;
                if(target[s[left]]>0){
                    m++;
                }
                left++;
               
            }
            
        
            
        }
        return (minlen == INT_MAX) ? "" : s.substr(start,minlen);
        
    }
};