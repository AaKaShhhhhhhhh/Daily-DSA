// Last updated: 7/30/2025, 10:47:34 AM
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;
        helper(s, result , 0 ,curr);
        return result;
    }
    void helper(string s, vector<vector<string>> &result , int i, vector<string> &curr){

        if(i == s.size() && !s.empty()){
            result.push_back(curr);
            return;
        }
        for(int c = i ; c<s.size() ; c++){
            if(ispalindrome(s,i,c)){
                string substr = s.substr(i,c-i+1);
                curr.push_back(substr);

                helper(s,result,c+1,curr);
                curr.pop_back();
            }
        }
        
    }

    bool ispalindrome(string s , int left , int right){

        

        while(left<right){
            if(s[left] != s[right]){
                return false;
               
            }
             left++;
                right--;
            
        }
        return true;
    }
};