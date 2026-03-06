// Last updated: 3/6/2026, 9:18:53 PM
1class Solution {
2public:
3    vector<string> generateParenthesis(int n) {
4        vector<string> result;
5        helper(n ,0,0, "", result);
6        return result;
7    }
8
9    void helper(int n , int cnt1,int cnt2, string s , vector<string> &result){
10        if(cnt1==n && cnt2==n){
11            result.push_back(s);
12            return;
13        }
14        
15        // if(s.empty || s,back()!=')'){
16        //     s.push_back('(');
17        //     cnt1++;
18        // }
19        // if(s.empty || s,back()!='('){
20        //     s.push_back(')');
21        //     cnt2++;
22        // }
23        if(cnt1 < n ){
24            helper(n ,cnt1+1,cnt2,s+'(', result);
25            
26        }
27        if(cnt2 < cnt1){
28            helper(n, cnt1,cnt2+1, s+')', result);
29            
30        }
31        
32        //if(s.empty() || )
33        
34    }
35};