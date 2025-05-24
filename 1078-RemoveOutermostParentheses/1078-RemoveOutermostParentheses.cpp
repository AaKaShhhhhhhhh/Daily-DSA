// Last updated: 5/25/2025, 12:01:29 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
       // int n  = s.size(); 
        string result;
        int cnt = 0;
        for(char i : s){
            if(i == '('){
                if(cnt>0){result+=i;}
                cnt++;
            }
            else if(i==')'){
                cnt--;
                if(cnt>0){result+=i;}
                }
            

        }
         return result;
        }
       
    
};