// Last updated: 1/1/2026, 11:15:19 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4         int hold = -prices[0];
5        int notHold = 0;
6
7        for(int i = 1; i < prices.size(); i++) {
8            int prevNotHold = notHold;
9
10            notHold = max(notHold, hold + prices[i]); 
11            hold = max(hold, prevNotHold - prices[i]); 
12        }
13        return notHold;
14    }
15};