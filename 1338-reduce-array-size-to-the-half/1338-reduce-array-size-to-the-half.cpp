class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int> mpp;
        
        int n = arr.size();
        int nn = n;
        
        for(auto it : arr){
            
            mpp[it]++;
            
        }
        
        vector<int> ans;
        
        for(auto it : mpp){
            
            ans.push_back(it.second);
            
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        
        int cnt = 0;
        
        for(auto it : ans){
        
            nn -= it; 
            cnt++;
            
            if(nn <= n/2 ){
                return cnt;
            }
            
        }
        
        return -1;
        
    }
};