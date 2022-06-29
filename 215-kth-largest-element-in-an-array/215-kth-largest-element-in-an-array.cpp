class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // kth largest hai toh min heap lagega bhai
        priority_queue<int, vector<int> , greater<int>> minn;
        
        for(int i=0; i<nums.size(); i++){
            
            minn.push(nums[i]);
            
            // agar k se jyada hai toh laat maar
            if(minn.size()>k){
                
                minn.pop();
                
            }
            
        }
        
        
        // sabse top wala hi answer hai bhai
        return minn.top();
        
    }
};