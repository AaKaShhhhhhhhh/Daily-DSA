// Last updated: 8/26/2025, 7:45:27 PM
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdia = 0;
        int maxarea = 0;
   
        for(auto &rec : dimensions){
             int len = rec[0];  int bre = rec[1];
             int dia = len*len + bre*bre;
             int area = len*bre;
            if(dia > maxdia){
                maxdia = dia;
                maxarea = area;
            }else if(dia == maxdia){
                maxarea = max(maxarea , area);
            }

        }
       return maxarea;
    }
};