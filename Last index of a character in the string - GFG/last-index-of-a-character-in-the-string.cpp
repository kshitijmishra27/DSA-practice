//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int LastIndex(string s, char p){
        
        unordered_map<char,int> mpp;
        
        for(int i=0; i<s.size(); i++){
            mpp[s[i]] = i;
        }
        
        if(mpp.count(p)){
            return mpp[p];
        }
        else{
            return -1;
        }
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends