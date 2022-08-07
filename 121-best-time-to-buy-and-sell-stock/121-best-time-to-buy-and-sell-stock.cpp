class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
        int mn = INT_MAX , mx = INT_MIN;
        
    for(int i=0; i<prices.size(); i++){
        
        mn = min(mn, prices[i]);  // checking min at index to find smallest element
        mx = max(mx, prices[i] - mn);  // finding the maximum difference at every index;
        
    }
        
        return mx;
        
    }
};