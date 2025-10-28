// Last updated: 10/28/2025, 10:50:08 PM
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

       
        for (int start = 0; start < n; start++) {
            if (nums[start] != 0) continue; 

            
            for (int dir : {1, -1}) {
                vector<int> temp = nums; 
                int curr = start;
                int move = dir;

                while (curr >= 0 && curr < n) {
                    if (temp[curr] == 0) {
                        curr += move;
                    } else {
                        temp[curr]--;
                        move = -move; 
                        curr += move;
                    }
                }

               
                bool allZero = true;
                for (int x : temp) {
                    if (x != 0) {
                        allZero = false;
                        break;
                    }
                }

                
                if (allZero) ans++;
            }
        }

        return ans;
    }
};
