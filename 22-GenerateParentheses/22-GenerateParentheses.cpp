// Last updated: 6/25/2025, 10:27:58 AM
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper(n ,0,0, "", result);
        return result;
    }

    void helper(int n , int cnt1,int cnt2, string s , vector<string> &result){
        if(cnt1==n && cnt2==n){
            result.push_back(s);
            return;
        }
        
        // if(s.empty || s,back()!=')'){
        //     s.push_back('(');
        //     cnt1++;
        // }
        // if(s.empty || s,back()!='('){
        //     s.push_back(')');
        //     cnt2++;
        // }
        if(cnt1 < n ){
            helper(n ,cnt1+1,cnt2,s+'(', result);
            
        }
        if(cnt2 < cnt1){
            helper(n, cnt1,cnt2+1, s+')', result);
            
        }
        
        //if(s.empty() || )
        
    }
};