class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        
        // kshitij Mishara.....................................
      
        long long n = arr.size();
        long long cnt = 0;
        vector<long long> v;
        
        for(long long i = 0; i<n; i++){
            
            if(arr[i] == 0){
                cnt++;
            }
            else if(arr[i] != 0){
                v.push_back(cnt);
                cnt = 0;
            }
            
            if(i==n-1 && arr[i] == 0){
                v.push_back(cnt);
            }
            
        }
        
        long long ans = 0;
        
        for(auto it : v){
            
            ans += (it * (it+1))/2;
            
        }
        
        return ans;
      
    }
};