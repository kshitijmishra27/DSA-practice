class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
     vector<int> dup = nums;
     vector<int> ans;
        
        sort(dup.begin(), dup.end());
        
        int low = 0, high = nums.size() - 1;
        int n1, n2;
        
        while(low < high){
            
            if(dup[low] + dup[high] == target){
                n1 = dup[low];
                n2 = dup[high];
                break;
            }
            
            else if(dup[low] + dup[high] > target){
                high--;
            }
            else{
                low++;
            }
            
        }
        
        for(int i=0; i<nums.size(); i++){
            if(n1 == nums[i]){
                ans.push_back(i);
            }
            else if(n2 == nums[i]){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
        
};