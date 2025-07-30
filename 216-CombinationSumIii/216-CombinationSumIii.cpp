// Last updated: 7/30/2025, 10:47:19 AM
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> arr;
        helper(result , arr , k,n , 0);
        return result;
        
    }
    void helper(vector<vector<int>>& result , vector<int>& arr, int k , int n , int start){

        if(arr.size() == k && n==0){
            result.push_back(arr);
            return;
        }
        
            for(int i = start+1 ; i<=9 ; i++){

             
                arr.push_back(i);
                helper(result, arr , k , n-i, i);
                arr.pop_back();
                         
            }

            
            
            
             
        



    }
};