class Solution {
public:
    
    
    int countbits(int n , int k, long long& ans){
        
        int cnt = 0;
        
        while(n){
            
            if(n % 2 )  cnt++;
            
            n /= 2;
            
        }
        
        if(cnt * 2 >= k)  ans++;
        
        return cnt;
        
    }
    
    long long countExcellentPairs(vector<int>& nums, int k) {
        
        // usign sets to to get the unique elements in the array
         long long ans = 0;
        unordered_set<int> s(nums.begin(), nums.end());    // converting values from vector to set
        
        vector<int> v;
        
        for(auto& it : s ){
            v.push_back( countbits(it , k , ans) );          //   storing the bits of the values in the set

        }
        
        // sort the arrray
     sort(v.begin(), v.end());
        
        int start = 0;
        int end = v.size() - 1;
       
          
        while(start < end){
            
            if( v[start] + v[end] >= k ){
                
                ans += (end-start)*2  ;
                end--;
                
            }
            
            else{
                
                start++;
                
            }
            
        }
        
        return ans;
       
    }
    
};