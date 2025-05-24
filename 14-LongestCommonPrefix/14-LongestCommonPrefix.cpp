// Last updated: 5/25/2025, 12:02:17 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for( int i=1; i<strs.size() ; i++){
            string s = strs[i]; int n = 0;
            string res = "";

            while(n<prefix.size() && n < s.size()){
            if(prefix[n]==s[n]){
                res += s[n];
                n++;
            }   else {
                    break; 
                }        
        }
        prefix = res;
        if (prefix.empty()) break;

        }
        
      return  prefix;
        
    }
};