// Last updated: 7/30/2025, 10:46:45 AM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0;
        int right= 0;
        int sum =0; int totalpts = 0; int minsum = INT_MAX;
        if(k==0)return totalpts;
        for(right = 0; right<n ; right ++){
            totalpts+= cardPoints[right];
            sum += cardPoints[right];
        
        if(right-left+1>n-k){
            sum-= cardPoints[left];
            left++;

        }
        if(right-left+1 == n-k){
            minsum = min(minsum , sum);
        }
        }

        return totalpts - minsum;
    }
};