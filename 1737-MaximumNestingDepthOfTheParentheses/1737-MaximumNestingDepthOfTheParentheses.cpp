// Last updated: 5/25/2025, 11:53:20 PM
class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0; int maxcnt = 0; //int f;
        for(int i:s){
            if(i=='('){cnt++;    
                     maxcnt = max(cnt,maxcnt);
}
            else if(i==')'){cnt--;}
        }
        return maxcnt;
    }
};