class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        int n = arr.size();
      
        int cnt = 0;
        int element =0;
        
        // it is writeen ki maj element jyada hoga n/2 se so count will remain more than 0
        
        for(int i=0; i<n; i++){
            
            if(cnt == 0){
                element = arr[i];  // elements changing
            }
            
            if(element == arr[i]){
                cnt++;
            }
            else{
                cnt--;
            }
            
        }
        
        return element;
        
    }
};