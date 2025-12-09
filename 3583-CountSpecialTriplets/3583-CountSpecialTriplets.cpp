// Last updated: 12/9/2025, 7:27:33 PM
1class Solution {
2public:
3    int specialTriplets(vector<int>& nums) {
4        const long long MOD = 1e9+7;
5
6        int n = nums.size();
7
8        unordered_map<long long, long long> prevfreq;
9        unordered_map<long long, long long> nextfreq;
10
11
12
13        for(int x : nums)nextfreq[x]++;
14        
15        long long res = 0;
16        for(int j = 0 ; j< n ; j++){
17
18            int x = nums[j];
19            nextfreq[x]--;
20            long long target = 2LL * x;
21            long long left = prevfreq[target];
22            long long right = nextfreq[target];
23             res = (res + (left * right) % MOD) % MOD;
24
25            //res += 1LL * prevfreq[target] * nextfreq[target]% MOD;
26            prevfreq[x]++;
27
28        }
29        return (int)res;
30    }
31};