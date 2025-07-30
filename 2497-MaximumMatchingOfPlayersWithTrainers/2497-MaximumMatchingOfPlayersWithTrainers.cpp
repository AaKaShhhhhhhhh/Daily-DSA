// Last updated: 7/30/2025, 10:46:30 AM
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int cnt = 0;
         int i =0; int j =0;
         sort(players.begin(), players.end());
         sort(trainers.begin(), trainers.end());
        while(i<=players.size()-1 && j<=trainers.size()-1){
                if(players[i] <= trainers[j]){
                    cnt++;
                    i++;
                 j++;
                   
                }
                else{
                    // i++;
                    j++;
                }
                    
            
        }
        return cnt;
        //  for( int i=0; i<players.size()-1 ; i++){
        //     for(int j=0;j<trainers.size()-1 ; j++){
        //         if(players[i]<=trainers[j]){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
    }
};