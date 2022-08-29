class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> st;
        
        for(auto &it : nums){
            st.insert(it);
        }
        
        int ans = 0;
        
        for(auto it : st){
            
            if( !st.count(it-1) ){
                
                int curr = it;
                int cnt = 1;
                
                while(st.count(it+1)){
                    
                    cnt++;
                    it++;
                    
                }
                
                ans = max(ans , cnt);
                
            }
            
        }
        
        return ans;
        
    }
};