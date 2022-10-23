//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,int freq) {
        
        vector<vector<int>> dis(n , vector<int> (n, 1e7));
        
      for(auto &it : edges){
          dis[it[0]][it[1]] = it[2];
          dis[it[1]][it[0]] = it[2];
      }
      
      for(int i=0; i<n; i++) dis[i][i] = 0;
      
      for(int k=0; k<n; k++){
          for(int i=0; i<n; i++){
              for(int j=0; j<n; j++){
                dis[i][j] = min( dis[i][j] , dis[i][k] + dis[k][j]);
              }
          }
      }
      
      int cntCity = n; 
      int cityNo  = -1;
      
      for(int city = 0; city < n; city++){
          
            int cnt = 0;
          
          for(int adjcity = 0; adjcity<n; adjcity++){
              
              if(dis[city][adjcity] <= freq){
                  cnt++;
              }
              
          }
          
          if(cnt <= cntCity){
              
              cntCity = cnt;
              cityNo = city;
              
          }
          
      }
      
      return cityNo;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends