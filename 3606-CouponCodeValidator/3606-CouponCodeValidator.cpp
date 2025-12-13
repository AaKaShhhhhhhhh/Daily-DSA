// Last updated: 12/13/2025, 8:01:15 PM
1class Solution {
2public:
3    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
4        vector<string> ans;
5        int n = code.size();
6
7        unordered_map<string, int> order;
8        order["electronics"] = 0;
9        order["grocery"] = 1;
10        order["pharmacy"] = 2;
11        order["restaurant"] = 3;
12
13         vector<pair<int, string>> valid;
14
15         for (int i = 0; i < code.size(); i++) {
16
17
18         if (isActive[i] == false)
19                continue;
20         if (code[i].size() == 0)
21                continue;       
22
23         bool flag = true;
24
25         for(char c : code[i]){
26            if(!(isalnum(c) || c == '_')){
27                flag = false;
28                break;
29            }
30         }       
31         if(!flag)continue;
32
33         if (order.find(businessLine[i]) == order.end())
34                continue;
35
36         valid.push_back({order[businessLine[i]], code[i]});       
37         }
38         sort(valid.begin(), valid.end());
39
40        
41        for (auto &p : valid)
42            ans.push_back(p.second);
43
44        return ans;
45    }
46};