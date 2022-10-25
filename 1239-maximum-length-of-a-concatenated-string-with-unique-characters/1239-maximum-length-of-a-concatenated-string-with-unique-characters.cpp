class Solution {
public:
    
    void print(vector<string> &arr, int n ,int i,  vector<int> &vis, int &maxlen, int currlen){
        
        if(i == n){
            maxlen = max(maxlen, currlen);
            return;
        }
     
        int m = arr[i].size();        
        vector<int> temp = vis;
        int flag = 0;
        
        for(int it=0; it<m; it++){
           
            char ch = arr[i][it];    
            if(temp[ ch - 'a'] == 1){
                flag = 1;
                break;
            }     
            temp[ ch - 'a'] = 1;
        }
        
        if(flag == 0){          // pick
            print(arr, n , i+1, temp, maxlen, currlen + arr[i].size());
        }
        
        // not pick
        print(arr, n, i+1,vis, maxlen, currlen);
        
    }
    
    int maxLength(vector<string>& arr) {
        
        int n = arr.size();
        
        vector<int> vis(26,0);
        int maxlen=0, currlen=0;
        
        print(arr, n, 0,vis, maxlen, 0);
        
        return maxlen;
    }
};