class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        if(strs.size() == 0) return ans;
        
        unordered_map<string, vector<string> > mpp;  
        
        for(int i=0; i<strs.size(); i++){
            
            string temp = strs[i];
            sort(temp.begin(), temp.end());
                
            mpp[temp].push_back(strs[i]);     
        }
        
        for(auto &it : mpp){
            
            vector<string> temp;
            
            for(auto &i : it.second){
                temp.push_back(i);
            }
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};