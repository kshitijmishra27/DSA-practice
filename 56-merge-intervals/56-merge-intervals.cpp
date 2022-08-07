class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        if(intervals.empty()){
            return ans;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval = intervals[0];
        
        for(auto it : intervals){
            
            // agr ange wale ka pehla pichle wale ke doosre se chota hai 
            
            if( it[0] <= tempInterval[1] ){
                
                // pichle wale ke doosre ko change kardo bhai 
                
                tempInterval[1] = max( it[1] , tempInterval[1] );
            }
            
            else{
                // agr bada hai toh daal de bhai answer me
                ans.push_back(tempInterval);
                tempInterval = it;
                
            }
            
        }
       
       // ek bach gaya bhai wo bhi daal de 
        ans.push_back(tempInterval);
        
        // answer bhej de bhai 
        return ans;
        
    }
};