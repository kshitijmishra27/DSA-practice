
class Solution {
public:
   int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right(n),left(n);
        
        stack<int> s;
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if( s.empty()){
                
                right[i] = n;
                
            } 
            else{
                right[i] = s.top();
            }
            s.push(i);
        }
        
        while(!s.empty()){
            s.pop();
        }
        
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
             if( s.empty()){
                
                left[i] = -1;
                
            } 
            else{
                left[i] = s.top();
            }
            s.push(i);
        }
        
        int ans = INT_MIN;
       
        for(int i=0;i<n;i++){
            ans = max(ans,(right[i]-left[i]-1)*(heights[i]));
        }
        
        return ans;
    }
};