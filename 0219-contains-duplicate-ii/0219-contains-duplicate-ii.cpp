class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mpp;
        
        for(int i=0; i<nums.size(); i++){
            
            if(mpp.count(nums[i])){
                if(abs(i - mpp[nums[i]]) <= k){
                    return true;
                }
                else{
                    mpp[nums[i]] = i;
                }
            }
            else{
                mpp[nums[i]] = i;
            }
            
        }
        
        return false;
        
    }
};