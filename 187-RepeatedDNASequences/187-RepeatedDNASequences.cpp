// Last updated: 12/14/2025, 9:38:51 PM
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        unordered_map<string, int> freq;
5        vector<string> ans;
6
7        int n = s.size();
8        if(n < 10)return ans;
9
10        for(int i = 0 ; i + 9 < n ; i++){
11            string sub = s.substr(i,10);
12            freq[sub ]++;
13
14            if(freq[sub] == 2){
15                ans.push_back(sub);
16            }
17        }
18        return ans;
19    }
20};