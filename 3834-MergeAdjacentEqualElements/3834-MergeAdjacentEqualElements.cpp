// Last updated: 2/11/2026, 8:52:51 PM
1class Solution {
2public:
3    vector<long long> mergeAdjacent(vector<int>& nums) {
4        
5
6        vector<long long> stk;
7
8        for(int i : nums){
9            long long curr = i;
10
11            while(!stk.empty() && stk.back() == curr){
12                curr += stk.back() ;
13                stk.pop_back();
14        }
15
16            stk.push_back(curr);
17            
18                    }
19                    return stk;
20        
21        // int n = nums.size();
22        // long long i =0 ; long long j = i-1; 
23        // long long sum = 0;
24
25        // while( i < n){
26
27        //     if(nums[i] == nums[j]){
28        //         sum = nums[i] + nums[j];
29        //         nums.erase(nums.begin() + i , nums.end()+j);
30        //         nums.insert(nums.begin() + i , sum);
31        //         n-1;
32        //     }
33        //     i++;
34        // }
35        // return nums;
36    }
37};