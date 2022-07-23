class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        map<char,int> mpp;
        map<int,int> num;
        
        for(int i=0; i<5; i++){
            mpp[suits[i]]++;
            num[ranks[i]]++;
        }
        
        int mx = INT_MIN;
        
        for(auto it : mpp){
            mx = max(mx , it.second);
        }
        
        if(mx == 5){
            return "Flush" ;
        }
        
        int cnt = 0;
        
        for(auto it : num){
            cnt = max(cnt , it.second);
        }
        
        if(cnt>=3){
            return "Three of a Kind";
        }
        else if(cnt == 2){
            return "Pair";
        }
        else{
            return "High Card";
        }
        
    }
};