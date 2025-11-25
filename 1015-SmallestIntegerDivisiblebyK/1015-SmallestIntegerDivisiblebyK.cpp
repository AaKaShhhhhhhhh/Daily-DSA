// Last updated: 11/25/2025, 5:57:03 PM
class Solution {
public:
    int smallestRepunitDivByK(int k) {

        if(k % 2 == 0 || k % 5 == 0) return -1;

        int temp = 0;
        for(int i = 1 ; i <= k ; i++){
            temp = (temp*10 + 1) % k;

            if(temp == 0)return i;
        }
        return -1;
        // vector<int> ones;
        // int sum = 0;
        // for(int i = 0 ; i < k ; i++){
        //     ones.push_back(1);
        // }
        // for(int i = 0 ; i < ones.size() ; i++){
        //     sum += ones[i];
        // }
        // if(sum % k ==0)return ones.size();
        // else{
        //     return -1;

        // }

    }
};