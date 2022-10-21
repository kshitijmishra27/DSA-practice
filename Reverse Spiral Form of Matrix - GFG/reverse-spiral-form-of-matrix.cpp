//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&arr)  {
     
     // starting row   
     int strow = 0;
     int stcol = 0;
     
     // starting col
     int endrow = R-1;
     int endcol = C-1;
     
     int cnt = 0;   int total = R*C;
     
     vector<int> ans;
     
     while( cnt < total){
         
         // starting row
         for(int j = stcol; j<=endcol; j++){
             ans.push_back(arr[strow][j]);
             cnt++;
         }
         if(cnt >= total){
             break;
         }
         strow++;
         
         // ending col
         for(int i = strow; i <= endrow; i++){
             ans.push_back(arr[i][endcol]);
             cnt++;
         }
         if(cnt >= total){
             break;
         }
         endcol--;
         
         // ending row
         for(int j = endcol; j>=stcol; j--){
             ans.push_back(arr[endrow][j]);
             cnt++;
         }
         if(cnt >= total){
             break;
         }
         endrow--;
         
         // starting col
         for(int i=endrow; i>=strow; i--){
             ans.push_back(arr[i][stcol]);
             cnt++;
         }
         if(cnt >= total){
             break;
         }
         stcol++;
         
     }
     
     reverse(ans.begin(), ans.end());
     
     return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends