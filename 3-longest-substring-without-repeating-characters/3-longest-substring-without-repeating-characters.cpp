class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
         if(s.size()==0)
      return 0;
      
  int ans = INT_MIN;
  unordered_map<char, int> mpp;
  
    int l = 0, r =0;
    
    while(r < s.size()){
        
        if(mpp.count(s[r])){ // if exists then 
            l = max(l , mpp[s[r]] + 1);  // take mpp[s[r]] if 
        }
        
        mpp[s[r]] = r; // behaving like i...mapping of indexes
        
        ans = max(ans , r - l + 1);
        r++;
        
    }
  
     
     return ans;
     
        
    }
};