// Last updated: 2/23/2026, 8:59:04 PM
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        
5        long long i =0 ;
6        long long j = 0;
7        long long maxi = 0;
8        long long sum = 0;
9        unordered_map<long long,long long> map;
10        while(j < nums.size()){
11                map[nums[j]]++;
12                sum+=nums[j];
13                
14             while(map[nums[j]] > 1){
15                    map[nums[i]]--;
16                    sum-=nums[i];
17                    i++;
18                   
19                }
20 
21            if(j-i+1 < k){
22                j++;
23            }
24            else if(j-i+1 == k){
25                maxi = max(maxi , sum);
26
27                sum -= nums[i];
28                map[nums[i]]--;
29                i++;
30                j++;
31
32            }
33
34        }
35        return maxi;
36    }
37};