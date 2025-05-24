// Last updated: 5/25/2025, 12:02:12 AM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
            int start = 0;
        int end = n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;

        }
           
        }
        //for(int i=0;i<n;i++){
           // int start = 0;
        //int end = n-1;
            //while(start<end){
               //  swap(matrix[i][start],matrix[i][end]);
               // start++;
              //  end--;
         
            //}
       // }

    }
};