// Last updated: 8/21/2025, 6:52:43 PM
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        int isodd = false;
        int ans = 0;
        for(char c : s){
            map[c]++;
        }
      
        for(auto &c : map){
             if(c.second % 2 == 0){
                ans += c.second;
             }else{
                ans+= c.second - 1;
                isodd = true;
             }
             
        }
        if(isodd)ans+=1;
        return ans;
        
    }
};