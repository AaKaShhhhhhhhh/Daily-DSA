// Last updated: 8/11/2025, 5:33:55 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int cnt = 0;
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        // for(int i=0 ; i<n ; i++){
        //     for(int j = i; j<m ; j++){
        //         if(s[j] >= g[i]){
        //             cnt++;
        //             s[j]=0;
        //             break;
        //         }
        //     }
        // }
        int i = 0; 
        int j = 0;
        while(i < n && j< m){
            if(s[j] >= g[i]){
                cnt ++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return cnt;
    }
};