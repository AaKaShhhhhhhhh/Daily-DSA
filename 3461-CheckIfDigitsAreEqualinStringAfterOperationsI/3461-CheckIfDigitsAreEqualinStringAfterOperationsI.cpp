// Last updated: 10/23/2025, 7:25:38 PM
class Solution {
public:
    bool hasSameDigits(string s) {
       // string temp = "";
        vector<int> digits;
        for (char c : s)
        digits.push_back(c - '0');
        
        while(digits.size() > 2){
            vector<int> next;
            int n = digits.size();
            for(int i = 0 ; i < n-1 ; i++){
                next.push_back((digits[i] + digits[i + 1]) % 10);
            }
            digits = next;

        }
        return digits[0] == digits[1];
    }
};