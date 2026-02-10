// Last updated: 2/10/2026, 10:43:59 PM
1class Solution {
2public:
3    int longestBalanced(vector<int>& nums) {
4        int ans = 0;
5
6        
7
8        for(int i = 0 ; i < nums.size() ; i++){
9            unordered_map<int,int> even , odd;
10            int ecnt = 0 ;
11                int ocnt = 0;
12           
13            
14
15            for(int j = i ; j < nums.size() ; j++){
16                
17                
18                if(nums[j] % 2 == 0){
19                    if(++even[nums[j]] == 1){
20                    ecnt++;
21                }
22
23                }else{
24                    if(++even[nums[j]] == 1){
25                    ocnt++;
26                }
27
28                }
29                
30                 if(ecnt == ocnt){
31                ans = max(ans , j - i +1);
32            }
33            }
34
35        }
36
37
38        return ans;
39
40        
41    }
42};