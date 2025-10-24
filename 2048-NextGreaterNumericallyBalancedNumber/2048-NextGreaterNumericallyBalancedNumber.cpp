// Last updated: 10/24/2025, 9:55:36 PM
class Solution {
public:
bool isBalanced(int num) {
    int count[10] = {};
    string s = to_string(num);
    for (char c : s) count[c - '0']++;

    for (int d = 1; d <= 9; ++d) {
        if (count[d] > 0 && count[d] != d) return false;
    }
    return count[0] == 0; // ensure 0 is not present
}

    int nextBeautifulNumber(int n) {
        for (int i = n + 1; i <= 10000000; ++i) {
            if (isBalanced(i)) return i;
        }
        return -1; 
    }
};