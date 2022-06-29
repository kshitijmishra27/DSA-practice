class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > minn;
        map<int,int> mpp;
        
        for(int i=0; i<nums.size(); i++ ){
            mpp[nums[i]]++;
        }
        
        for(auto it : mpp){
            
            minn.push( {it.second, it.first} );
            
            if(minn.size() > k){
                minn.pop();
            }
            
        }
        
        vector<int> v;
        
        while(!minn.empty()){
           
            v.push_back(minn.top().second);
            minn.pop();
            
        }
        
        return v;
    }
};