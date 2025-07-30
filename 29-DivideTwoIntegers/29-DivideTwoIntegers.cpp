// Last updated: 7/30/2025, 10:48:02 AM
class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = true;

        if(dividend==divisor)return 1;
        if(divisor>=0 && dividend<0)sign = false;
        if(divisor<0 && dividend>=0)sign = false;

        long long n = abs((long long)dividend); 
        long long d = abs((long long)divisor);

        
        long long ans = 0;
        while(n >= d){
            int cnt = 0;

            while(n >= (d<<(cnt+1))){
                cnt++;
                 

            }
            ans +=  (1LL<<(cnt));
                 n = n - (d*(1LL<<(cnt)));
        }
                if(ans >= (1LL<<31) && sign)return INT_MAX;
                 if(ans >= (1LL<<31) && !sign)return INT_MIN;
                 return sign ? ans : (-1*ans);
    }
};