// Last updated: 12/7/2025, 7:58:31 PM
1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int cnt = 0;
5        for(int i = low ; i <= high ; i++){
6            if(i%2 != 0)cnt++;
7        }
8        return cnt;
9    }
10};