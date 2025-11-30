// Last updated: 11/30/2025, 5:57:10 PM
1class Solution {
2public:
3    int minSubarray(vector<int>& nums, int p) {
4        
5        long long sum = 0;
6        for(int i : nums){
7            sum+=i;
8        }
9        int rem = sum%p;
10        if(rem == 0)return 0;
11
12        unordered_map<int , int> map;
13        map[0] = -1;
14        
15        long long prefix = 0;
16        int res = nums.size();
17         
18        for(int i = 0 ; i < nums.size() ; i++){
19            prefix = (prefix+nums[i]) % p;
20
21            int temp = (prefix - rem +p)%p;
22            if(map.count(temp)){
23                res = min(res , i - map[temp]);
24            }
25            map[prefix]  = i;
26        }
27        return res == nums.size() ? -1 : res;
28
29    }
30};