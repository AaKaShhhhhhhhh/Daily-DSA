// Last updated: 10/17/2025, 11:25:37 PM
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';  // convert '0' or '1' to int
            if (j >= 0) sum += b[j--] - '0';

            result += (sum % 2) + '0';        // current bit
            carry = sum / 2;                  // carry for next bit
        }

        reverse(result.begin(), result.end()); // reverse the string
        return result;
    }
};
