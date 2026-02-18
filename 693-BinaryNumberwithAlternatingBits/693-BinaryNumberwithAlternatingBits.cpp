// Last updated: 2/18/2026, 6:01:13 PM
1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4        string bin = "";
5
6        while(n>0){
7            int bit = n%2;
8            bin.push_back('0' + bit);
9            n/=2;
10
11
12        }
13        for(int i = 0 ; i < bin.size()-1 ; i++){
14             if(bin[i]==bin[i+1]){
15                return false;
16             }
17        }
18        return true;
19    }
20};