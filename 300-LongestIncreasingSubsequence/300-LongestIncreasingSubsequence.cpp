// Last updated: 1/5/2026, 8:37:10 PM
1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        
5        int n = nums.size();
6
7        vector<vector<int>> dp(n, vector<int>(n+1, -1));
8
9        return helper(0 , nums , dp , -1);
10
11
12       
13    }
14    int helper(int i  , vector<int> &arr , vector<vector<int>> &dp , int prev){
15
16        if(i == arr.size()-1){
17            if(prev == -1 || arr[prev]<arr[i]){
18                return 1;
19
20            }return 0;
21        }
22
23        if(dp[i][prev+1] != -1){
24            return dp[i][prev+1];
25        }
26
27        int nottake = helper(i+1, arr , dp , prev);
28
29        int take= 0;
30        
31        if(prev==-1){
32            take = helper(i+1,arr,dp,i) + 1;
33        }else if(arr[i] > arr[prev]){
34            take = helper(i+1,arr,dp,i) + 1;
35
36        }
37        return dp[i][prev+1] = max(take,nottake);
38
39            }
40};