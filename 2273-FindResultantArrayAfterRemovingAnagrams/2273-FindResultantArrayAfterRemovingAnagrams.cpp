// Last updated: 10/13/2025, 8:39:40 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       
       vector<string> ans;

       string old = "";

       for(string &c : words){
        string sorted = c;
        sort(sorted.begin() , sorted.end());
        if(sorted != old){
            ans.push_back(c);
            old = sorted;
        }
       }
       return ans;
    }
};