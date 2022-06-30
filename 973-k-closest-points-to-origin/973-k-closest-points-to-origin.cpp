class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue< pair< int , pair<int,int> > > maxx;
         
         
            vector<vector<int>> v;
        
        for(int i=0; i<points.size(); i++){
            
                          
                maxx.push( { points[i][0]*points[i][0] + points[i][1]*points[i][1] , { points[i][0], points[i][1] } } );
                
                if(maxx.size() > k)
                    maxx.pop();
             
                
            }
           
            
            while(!maxx.empty()){
                
                   vector<int> temp;
                
                temp.push_back(maxx.top().second.first);
                temp.push_back(maxx.top().second.second);
                
                v.push_back(temp);
                
                maxx.pop();
                
                
            }
            
        
        
        return v;
        
    }
};