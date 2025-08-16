// Last updated: 8/16/2025, 7:19:51 PM
class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int low = 0; int high =0;
        for(char i : s){
            if(i == '('){low++;high++;}
            if(i==')'){low--;high--;}
            if(i=='*'){low--;high++;}
            if(high<0)return false;
            if(low<0)low=0;
        
        }
        
        return low==0;
        
    }
};