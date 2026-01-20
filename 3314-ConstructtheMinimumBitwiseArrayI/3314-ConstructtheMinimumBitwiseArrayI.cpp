// Last updated: 1/20/2026, 8:36:59 PM
1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4        
5        vector<int> ans;
6   
7        for(int i = 0 ; i < nums.size() ; i++){
8            int temp = -1;
9          //bool temp = false;
10            for(int j = 0 ; j < 1000 ; j++){
11                 if((j | j+1) == nums[i]){
12               
13               // temp = true;
14                temp = j;
15                break;
16                
17            }
18            
19
20            }        
21            ans.push_back(temp);
22        }
23        return ans;
24    }
25};