// Last updated: 8/16/2025, 10:39:55 AM
class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num);
        int maxi = 0;
        int ans = 0;
        for(char &i:str){
       
        if(i == '6'){
            i='9';
            break;
        }
       
        }
        return stoi(str);
    }
};