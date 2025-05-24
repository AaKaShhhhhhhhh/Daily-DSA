// Last updated: 5/25/2025, 12:01:21 AM
class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i = num.length()-1 ; i>=0 ;--i){
            int conv = num[i]- '0';
            if(conv%2!=0){
                return num.substr(0, i+1);

            }
            

        }
        return "";
    }
};