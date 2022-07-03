// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   vector<vector<string>> res;
    vector<string> wordBreak(int n, vector<string>& dict, string s) {
        
        map<string, bool> mp;
        for(auto &x : dict) mp[x] = true;
        
        vector<string> out;
        dfs(s, mp, out);
        
        vector<string> ans;
        for(auto x : res) {
            string temp = "";
            for(int i = 0; i < x.size(); i++) {
                if(i == x.size() - 1) {
                    temp += x[i];
                    ans.push_back(temp);
                }
                else {
                    temp += x[i];
                    temp += ' ';
                }
            }
        }
        return ans;
    }
    
    void dfs(string s, map<string, bool> &mp, vector<string> &out) {
        if(s.size() == 0) {
            res.push_back(out);
            return;
        }
        
        for(int i = 0; i < s.size(); i++) {
            string temp = getString(s, i);
            if(mp[temp]) {
                out.push_back(temp);
                dfs(s.substr(i + 1), mp, out);
                out.pop_back();
            }
        }
    }
    
    string getString(string &s, int i) {
        string temp = "";
        for(int j = 0; j <= i; j++)
            temp.push_back(s[j]);
        return temp;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends