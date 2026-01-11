// Last updated: 1/11/2026, 9:25:20 PM
1class Solution {
2public:
3    int maximalRectangle(vector<vector<char>>& matrix) {
4         if (matrix.empty()) return 0;
5
6        int rows = matrix.size();
7        int cols = matrix[0].size();
8        vector<int> heights(cols, 0);
9
10        int maxArea = 0;
11
12        for (int i = 0; i < rows; i++) {
13          
14            for (int j = 0; j < cols; j++) {
15                if (matrix[i][j] == '1')
16                    heights[j]++;
17                else
18                    heights[j] = 0;
19            }
20
21            
22            maxArea = max(maxArea, helper(heights));
23        }
24
25        return maxArea;
26
27        
28    }
29        int helper(vector<int>& heights) {
30        stack<int> st;
31        heights.push_back(0); 
32        int maxArea = 0;
33
34        for (int i = 0; i < heights.size(); i++) {
35            while (!st.empty() && heights[st.top()] > heights[i]) {
36                int h = heights[st.top()];
37                st.pop();
38                int width = st.empty() ? i : i - st.top() - 1;
39                maxArea = max(maxArea, h * width);
40            }
41            st.push(i);
42        }
43
44        heights.pop_back();
45        return maxArea;
46    }
47
48};