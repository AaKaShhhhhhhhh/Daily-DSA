// Last updated: 2/13/2026, 10:01:41 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<vector<string>> res;
5        
6
7        unordered_map<string , vector<string>> mp;
8        
9        for(string& s : strs){
10            string sorted = s;
11            sort(sorted.begin() , sorted.end());
12            mp[sorted].push_back(s);
13        }
14
15        for(auto& p : mp){
16            res.push_back(p.second);
17        }
18
19        return res;
20
21    }
22};