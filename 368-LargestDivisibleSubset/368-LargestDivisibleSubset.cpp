// Last updated: 1/8/2026, 9:45:17 PM
1class Solution {
2public:
3    vector<int> largestDivisibleSubset(vector<int>& nums) {
4
5   
6
7        int n = nums.size();
8        if(n == 0) return {};
9
10        sort(nums.begin() , nums.end());
11        vector<int> dp(n,1);
12        vector<int> arr(n,-1);
13        vector<int> ans;
14        int maxsize = 1;
15        int index = 0;
16        
17
18        for(int i = 0 ; i < nums.size() ; i++){
19            for(int j = 0 ; j < i ; j++){
20
21                if(nums[i]%nums[j] == 0 && dp[j] +1 > dp[i]){
22                    dp[i] = dp[j]+1;
23                   
24                    arr[i] = j;
25                }
26            }
27             if(dp[i] > maxsize){
28                        maxsize = dp[i];
29                        index = i;
30                    }
31          
32        }
33        while(index!=-1){
34            ans.push_back(nums[index]);
35            index = arr[index];
36        }
37        return ans;
38    }
39
40};