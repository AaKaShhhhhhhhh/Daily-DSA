// Last updated: 7/30/2025, 10:46:52 AM
class Solution {
public:
    string makeFancyString(string s) {
        
        string ans;
        int cnt = 1;
       for(int i=0 ; i<s.length() ; i++){
            
        if(i>0 && s[i] == s[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt <3){
            ans.push_back(s[i]);
        }
        // else{
        //     continue;
        // }
       }
       return ans;
    }
};