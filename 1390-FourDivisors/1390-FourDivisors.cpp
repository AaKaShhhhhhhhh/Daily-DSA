// Last updated: 1/4/2026, 8:48:05 PM
1class Solution {
2public:
3    int sumFourDivisors(vector<int>& nums) {
4        
5        int n = nums.size();
6        int tsum = 0;
7           
8        for(int i = 0 ; i < n ; i++){
9          int cnt = 0;
10          int sum = 0;
11           for(int j = 1 ; j*j <= nums[i] ; j++){
12            if(nums[i] % j == 0){
13                int temp = nums[i]/j;
14
15                cnt++;
16                sum+=j;
17
18                if(temp!=j){
19                    cnt++;
20                    sum += temp;
21                }
22                if(cnt>4)break;
23            }
24           }
25        if (cnt == 4) {
26                tsum += sum;
27            }
28            
29        }
30        return tsum;
31
32    }
33};