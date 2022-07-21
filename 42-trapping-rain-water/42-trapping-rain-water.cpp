class Solution {
public:
    int trap(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> left(n), right(n);
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++){
            left[i] = max(left[i-1] , arr[i]);
        }
        
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1], arr[i]);
        }
       
        int sum = 0;
        
        for(int i=0; i<n; i++){
            
            sum += ( min(left[i], right[i]) - arr[i] );
        }
        
        return sum;
        
    }
};