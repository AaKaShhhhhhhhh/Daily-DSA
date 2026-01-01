// Last updated: 1/1/2026, 7:29:11 PM
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int n = digits.size();
5        vector<int> arr;
6        int carry = 1;
7        for(int i=n-1 ; i>=0 ; i--){
8            int sum = digits[i]+carry;
9
10            digits[i] = sum % 10;
11            carry = sum/10;
12
13        }
14        if(carry){
15            digits.insert(digits.begin() , carry);
16           
17        }
18         return digits;
19    }
20};