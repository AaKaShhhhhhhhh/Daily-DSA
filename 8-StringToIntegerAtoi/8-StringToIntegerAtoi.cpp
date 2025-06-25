// Last updated: 6/25/2025, 10:28:02 AM
class Solution {
public:
    int helper( long result , int sign , string s , int i){
        

        if (i >= s.length() || !isdigit(s[i])) {
            return sign * result;
        }
        int digit  = s[i] - '0';
        result = result*10 + digit;
        if(sign ==1 && result>INT_MAX)return INT_MAX;
        if(sign ==-1 && result>(long)INT_MAX+1)return INT_MIN;
        
        return helper(result , sign , s , i+1);
    }
    int myAtoi(string s) {
        //vector<int> arr;
        int index = 0;
        int sign = 1;
        int i = 0;
        while (i<s.length() && s[i] == ' '){
                 i++;
        
        }
            if(i<s.length() && s[i] =='-' ){
                sign = -1;
                i++;
            }
            else if(i<s.length() && s[i]=='+' ){
                i++;
            }
          
        return helper(0,sign, s,i);
    }
};