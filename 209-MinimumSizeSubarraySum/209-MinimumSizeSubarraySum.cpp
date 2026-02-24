// Last updated: 2/24/2026, 10:20:17 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4
5        int i = 0 ;
6        int j = 0;
7        int mini = INT_MAX;
8        int sum = 0;
9
10
11        while(j< nums.size()){
12            sum+=nums[j];
13           
14        //    if(sum < target){
15        //     j++;
16            
17        //    }
18
19           while(sum >= target){
20            mini = min(mini , j-i+1);
21
22            sum -= nums[i];
23
24            i++;  
25           }
26            j++;
27                       
28        }
29        if(mini == INT_MAX){
30            return 0;
31        }
32        return mini;
33        
34    }
35};