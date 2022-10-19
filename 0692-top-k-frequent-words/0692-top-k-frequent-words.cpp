class Solution {
public:
    
    static bool comp(pair<int, string> &a , pair<int, string> &b){
        
        if(a.first == b.first){
            return a.second < b.second;
        }
        
        else {
            return a.first > b.first;
        }
        
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string> ans;
        
        unordered_map<string,int> mpp;
        
        for(int i=0; i<words.size(); i++){
            mpp[words[i]]++;
        }
        
        vector<pair<int, string>> v;
        
      for(auto &it : mpp){
          v.push_back({it.second, it.first});      
      }
        
        sort(v.begin(), v.end(), comp);
        
        int i = 0;
        
        while(k--){
            
            ans.push_back(v[i].second);
            i++;
            
        }
        
        return ans;
        
    }
};