// Last updated: 10/9/2025, 9:28:03 PM
class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast = flag(n);

        while(fast!=1&&  slow!=fast){
            slow = flag(slow);
            fast = flag(flag(fast));
        }
        return fast ==1;
    }
    int flag(int n){
        int sum = 0;
        while(n>0){
            
            int digit = n%10;
            sum+=digit*digit;
            n =n/10;
        }
        return sum;
    }

};