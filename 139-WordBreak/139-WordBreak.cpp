// Last updated: 7/30/2025, 10:47:32 AM
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        unordered_map<int,bool> memo;
        if(helper( 0 , s , wordSet,memo)){
            return true;
        }
        return false;
    }
    bool helper(int start , string s , unordered_set<string>& wordSet , unordered_map<int,bool>& memo){

        if(start == s.size()){
            return true;
        }
        if(memo.count(start))return memo[start];
        for(int end = start+1; end<=s.size() ;end++){
            string substr = s.substr(start , end-start);

            if(wordSet.count(substr) && helper( end,s,wordSet, memo)){
                return memo[start] = true;
            }
        }
            return memo[start] = false;
    }
    
};