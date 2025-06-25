// Last updated: 6/25/2025, 10:27:52 AM
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long N =n;
        if(N<0){
            x = 1/x;
            N=-N;
        }

        while(N>0){
            if(N % 2==1){
                ans = ans*x;
            }
            x *=x;
            N/=2;
        }
      return ans;
    }
};