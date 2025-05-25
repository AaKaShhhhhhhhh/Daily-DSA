// Last updated: 5/25/2025, 10:51:50 AM
class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        int f = 0; int cnt = 0;
        vector<int> arr(128,0); vector<char> chars;
        for(int i:s){
            arr[i]++;
           // arr[s[i] - 'a']++;            
        }
        for (int i = 0; i < 128; i++) {
             if (arr[i] > 0) {
              chars.push_back((char)i); 
    }
}
sort(chars.begin(), chars.end(), [&](char a, char b) {
    return arr[a] > arr[b];   
});
string result = "";

for (char c : chars) {
    result += string(arr[c], c);  
}



        return result;
    }
};