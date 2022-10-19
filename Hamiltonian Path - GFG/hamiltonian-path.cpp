//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    bool dfs(vector<int> adj[], vector<int> &vis, int node, int n, int cnt){
        
        vis[node] = 1;
        cnt++;
        
        if(cnt == n){
            return true;
        }
        
        for(auto &it : adj[node]){
            
            if(vis[it] != 1){
                
                if(dfs(adj, vis, it, n , cnt)==true){
                    return true;
                }
                
            }
            
        }
        
        vis[node] = 0;
        cnt--;
        
        return false;
        
    }
    
    bool check(int n,int M,vector<vector<int>> Edges)
    {
       
       vector<int> adj[n+1];
       
       for(int i=0; i<M; i++){
           
            adj[Edges[i][0]].push_back(Edges[i][1]);
            adj[Edges[i][1]].push_back(Edges[i][0]);
            
       }
       
       vector<int> vis(n+1 , 0);
       
       int cnt = 0;
       
        for(int i=1; i<=n; i++){
            
            if(dfs(adj, vis, i, n , cnt) == true){
                return true;
            }
            
        }
        
        return false;
       
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends