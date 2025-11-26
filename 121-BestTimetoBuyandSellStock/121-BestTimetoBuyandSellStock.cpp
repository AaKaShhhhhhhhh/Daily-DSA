// Last updated: 11/26/2025, 8:42:47 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4         
5        int minPrice = INT_MAX;
6        int maxProfit = 0;
7
8        for(int price : prices){
9            minPrice = min(minPrice, price);               
10            maxProfit = max(maxProfit, price - minPrice); 
11        }
12         
13        return maxProfit;
14    }
15};