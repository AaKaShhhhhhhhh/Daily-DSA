// Last updated: 7/30/2025, 10:47:47 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> arr;
        int carry = 1;
        for(int i=n-1 ; i>=0 ; i--){
            int sum = digits[i]+carry;

            digits[i] = sum % 10;
            carry = sum/10;

        }
        if(carry){
            digits.insert(digits.begin() , carry);
           
        }
         return digits;
    }
};