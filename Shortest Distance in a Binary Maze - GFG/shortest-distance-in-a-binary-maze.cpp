//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
                         
                         
        if(source == destination) return 0;
       
       int n = grid.size();
       int m = grid[0].size();
       
       vector< vector<int> > dist(n , vector<int> (m , 1e9));
       queue<pair<int, pair<int,int>>> q;
       
       dist[source.first][source.second] = 0;
       q.push({0 , {source.first, source.second} } );
       
       int dr[] = { -1, 0, +1, 0};
       int dc[] = { 0, 1, 0, -1};
       
       while( !q.empty()){
           
            auto it = q.front();
            q.pop();
            
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            for(int i=0; i<4; i++){
                
                int newrow = row + dr[i];
                int newcol = col + dc[i];
                
                if(newrow >= 0 && newrow < n &&& newcol >=0 && newcol <m && 
                grid[newrow][newcol] == 1 && dis + 1 < dist[newrow][newcol] ){
                    
                    dist[newrow][newcol] = dis + 1;
                    q.push({dis + 1, {newrow, newcol}});
                    
                    if(newrow == destination.first && newcol == destination.second){
                        return dis + 1;
                    }
                    
                }
                
            }
           
       }
      
      
      
      return -1; 
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends