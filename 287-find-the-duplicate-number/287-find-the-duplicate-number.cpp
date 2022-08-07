class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0], fast = nums[0] ;
        
        do{ // starting me dono same hai nums[0] so for running atleast 1 time we need
            // do while loop
            
            // fast taking 2 steps
            // slow taking 1 step
            
            slow = nums[slow];
            fast = nums[nums[fast]];
            
        }while(slow != fast);
        
        fast = nums[0];
        
        while(slow != fast){
            
            slow = nums[slow];
            fast = nums[fast];
            
        }
        
        return slow;
        
    }
};