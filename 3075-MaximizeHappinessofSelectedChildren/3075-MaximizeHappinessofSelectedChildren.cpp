// Last updated: 12/25/2025, 10:09:40 PM
1class Solution {
2public:
3    long long maximumHappinessSum(vector<int>& happiness, int k) {
4        
5        sort(happiness.begin(), happiness.end(), greater<int>());
6        
7        long long ans = 0;
8        for(int i = 0; i < k; i++){
9            
10            int temp = happiness[i]-i;
11            if(temp<=0)break;
12            ans+=temp;
13
14        }
15        return ans;
16    }
17};