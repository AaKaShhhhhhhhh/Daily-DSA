// Last updated: 8/23/2025, 8:09:12 PM
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