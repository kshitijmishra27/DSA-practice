//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
  int solve(int i, int n, int cap, int price[], vector<vector<int>> &dp){
      
    if(i == n-1){
        if(cap % (i+1) == 0) return (cap/(i+1)) * price[i];
        return -1e8;
    }
    
    if(dp[i][cap] != -1) return dp[i][cap];
      
      int npick = 0 + solve(i+1, n, cap, price , dp);
      int pick = -1e8;
      
      if(i+1 <= cap){
          pick = price[i] + solve(i, n, cap - (i+1), price , dp);
      }
      
      return  dp[i][cap] = max(pick , npick);
      
 }

    int cutRod(int price[], int n) {
        
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        return solve(0, n, n, price, dp);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends