class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        int n = arr.size();
        
        if(n==1){
            return arr[0];
        }
        
        
        int mx =   INT_MIN; 
        
      map<int,int> mpp;
        
        int ans;
        
        for(int i=0; i<n; i++){
            
            mpp[arr[i]]++;
            
          if(mpp[arr[i]] > mx){
              mx = mpp[arr[i]];
              ans = arr[i];
          }
            
        }
       
        return ans;
        
    }
};