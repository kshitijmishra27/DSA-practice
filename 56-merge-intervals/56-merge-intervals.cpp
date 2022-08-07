class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
       vector<vector<int>> ans;
        
        // agar khali hai bhai 
        if(intervals.empty()){
            return ans;
        }
        
        sort(intervals.begin(), intervals.end()); // sort kardiya so that merge karne layak paas paad aa jaye
        
        vector<int> tempinterval = intervals[0];
        
    for(auto it : intervals){
        
        // agar ange wale ka pehle pichle wale ke doosre se chota hai
        
        if(it[0] <= tempinterval[1]){
            
            // pichle wale ke second ko max out kardo...jo bhi pichle wale ke second and ange wale ke second
            // me bada ho 
            
            tempinterval[1] = max( tempinterval[1] , it[1]);
            
        }
        
        else{  // agar ange wale ka pehle pichle wale ke doosre se bada hai
            
            ans.push_back(tempinterval);
            tempinterval = it;
            
        }
        
    }
        
        // last wala bach gaya bhai usko bhi dalde 
        ans.push_back(tempinterval);
        
        // return karde answer bhai
        return ans;
        
    }
};