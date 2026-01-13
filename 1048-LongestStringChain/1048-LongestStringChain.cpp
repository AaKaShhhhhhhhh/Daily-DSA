// Last updated: 1/13/2026, 9:56:27 PM
1class Solution {
2public:
3    int longestStrChain(vector<string>& words) {
4
5       sort(words.begin(), words.end(),
6             [](string &a, string &b) {
7                 return a.size() < b.size();
8             });
9
10        int n = words.size();
11        vector<int> dp(n, 1);
12        int ans = 1;
13       for(int i =0 ; i < n ; i++){
14        for(int j = 0 ; j < i ; j++){
15
16            if(helper(words[j] ,words[i])){
17                dp[i] = max(dp[i], dp[j] + 1);
18            }
19        }
20         ans = max(ans, dp[i]);
21       }
22       return ans;
23        
24    }
25
26    int helper(string s , string t){
27        int i = 0 ;
28         int j = 0 ;
29
30        if(t.size() != s.size() +1 )return false;
31
32        while(i < t.size()){
33
34            if(j < s.size() && s[j] == t[i]){
35                i++ ; j++;
36            }else{
37                i++;
38            }
39        } 
40
41        return j == s.size();
42
43
44    }
45};