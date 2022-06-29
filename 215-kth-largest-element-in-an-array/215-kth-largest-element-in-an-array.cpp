class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int> , greater<int>> minn;
        
        for(int i=0; i<nums.size(); i++){
            
            minn.push(nums[i]);
            
            if(minn.size()>k){
                
                minn.pop();
                
            }
            
        }
        
        return minn.top();
        
    }
};