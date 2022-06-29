class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue< pair<int,int> > maxx;
        
        for(int i=0; i<arr.size(); i++){
            
       maxx.push( { abs(arr[i]-x) , arr[i] } );
            
            if(maxx.size() > k){
                
                maxx.pop();
                
            }
            
        }
        
        vector<int> v;
      
        while(!maxx.empty()){
        
            v.push_back( maxx.top().second );
            
            maxx.pop();
            
        }
        
        sort(v.begin(), v.end());
        
        return v;
        
    }
};