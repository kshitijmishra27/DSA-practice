//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int solve(int i, int n, int maxWeight, int value[], int weight[], vector<vector<int>> &dp){

if(maxWeight < 0) return -1e8;
    
if(i == n-1){
    if(weight[i] <= maxWeight) return value[i];
    else return 0;
}
    
    if(dp[i][maxWeight] != -1) return dp[i][maxWeight];  
    
    int npick = 0 + solve(i+1, n, maxWeight, value, weight, dp);
    int pick = value[i] + solve(i+1, n, maxWeight - weight[i] , value, weight, dp); 
    
return dp[i][maxWeight] = max(pick , npick);
    
}
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
    vector<vector<int>> dp(n+1, vector<int> (W+1, -1));
    return solve(0, n, W, val, wt, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends