// Last updated: 7/30/2025, 10:48:04 AM
class Solution {
public:
    bool isValid(string s) {
       unordered_map<char, char> m = {
    {')', '('},
    {']', '['},
    {'}', '{'}
};
        int cnt = 0;
        stack<char> stk;
        for(char c:s){
            if(c == '(' || c == '{' || c == '['){
                stk.push(c);
            }
            else{
                if(stk.empty())return false;
                if(stk.top()!=m[c])return false;
                else{
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};