//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
public:

int solve(int i, int n, int profit[], int weight[], int cap, vector<vector<int>> &dp){
    
if(i == n-1){
    return cap/weight[i] * profit[i];
}
    
    if(dp[i][cap] != -1) return dp[i][cap];
    
    int npick = 0 + solve(i+1, n, profit, weight, cap, dp);
    int pick = 0;
    
    if(weight[i] <= cap){
        pick = profit[i] + solve(i, n, profit, weight, cap - weight[i], dp);
    }
    
   return dp[i][cap] = max(pick, npick);
}

    int knapSack(int N, int W, int val[], int wt[])
    {
        int n = N , cap = W;
        vector<vector<int>> dp(n+1, vector<int> (cap+1, -1));
        
        return solve(0, n, val, wt, cap, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends