class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> sec_frq;
        unordered_map<char, int> gues_frq;
        int bulls =0 ;
        int cows=0;
        for(int i=0 ; i<secret.size() ; i++){
            if(secret[i]== guess[i]){
                bulls++;
            }
            else{
                sec_frq[secret[i]]++;
                gues_frq[guess[i]]++;
            }
        }
        for( auto it : gues_frq){
            cows+= min(it.second , sec_frq[it.first]);
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};