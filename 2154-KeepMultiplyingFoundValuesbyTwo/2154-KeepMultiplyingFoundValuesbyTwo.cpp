// Last updated: 11/20/2025, 12:58:02 AM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool changed = true;

        while (changed) {
            changed = false;

            for (int x : nums) {
                if (x == original) {
                    original *= 2;
                    changed = true;
                    break;   
                }
            }
        }

        return original;
    }
};