// Last updated: 7/30/2025, 10:48:06 AM
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp = {
            {'2' , "abc"},
            {'3' , "def"},
            {'4' , "ghi"},
            {'5' , "jkl"},
            {'6' , "mno"},
            {'7' , "pqrs"},
            {'8' , "tuv"},
            {'9' , "wxyz"}
            };
            vector<string> result;
            helper(digits , mp , result , 0 ,"");

            return result;

        }
        void helper(string digits,unordered_map<char,string> mp, vector<string>& result,int index,string str ){            
                if(index == digits.size() && !digits.empty()){
                    result.push_back(str);
                    return;
                }
                
                for(char c: mp[digits[index]]){
                    str.push_back(c);

                    helper(digits , mp,result,index+1 , str);
                    str.pop_back();
                }

            
        }
    
};