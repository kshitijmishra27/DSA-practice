class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
       int n = nums.size() , l , k;
        
        for(k = nums.size()-2; k>=0; k--){
            
            if(nums[k] < nums[k+1]){  // increasing order from back jab break ho jaye
                break;
            }
            
        }
        
        if(k < 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            
            for(l=n-1; l>k; l--){
                
                if(nums[l] > nums[k]){  // back wala element jo sabse pehle greater hai nums[k] se whi se break
                    break;
                }
                
            }
            
            swap(nums[k], nums[l]);  // swap kar diya
            reverse(nums.begin() + k + 1, nums.end()); // last se reverse kar diya
            
        }
    }
};