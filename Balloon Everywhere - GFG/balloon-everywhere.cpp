//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        
        int minn = INT_MAX;
        unordered_map<char,int> mpp;
        
        for(auto &it : s){
            
        if(it == 'b' || it == 'a' || it=='l' || it == 'o' || it == 'n')
            mpp[it]++;
            
        }
        
        for(auto &it : mpp){
            
            if(it.first == 'l' || it.first == 'o'){
                it.second = it.second/2;
            }
            
            minn = min(minn, it.second);
            
        }
        
        return minn;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends