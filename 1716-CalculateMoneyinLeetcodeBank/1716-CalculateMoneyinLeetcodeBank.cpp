// Last updated: 10/25/2025, 9:09:17 PM
class Solution {
public:
    int totalMoney(int n) {
        int w = n /7 ; int d = n % 7;
       return  28*w + 7*w * (w-1)/2 + d*((w+1) + (w+d))/2;

    }
};