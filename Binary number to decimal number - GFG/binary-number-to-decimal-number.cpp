//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string s) {
        
        int ans = 0;
        
        int l = 1;
        
        for(int i=s.size()-1; i>=0; i--){
            
            int num = s[i] - '0';
            num *= l;
            
            ans += num;
            l = l << 1;
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends