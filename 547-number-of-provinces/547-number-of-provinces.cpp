class Solution {
public:
    
    void dfs(int node, vector<int> adj[] , vector<int> &vis){
        
        vis[node] = 1;
        
        for(auto it : adj[node]){
            
            if(vis[it] == 0){
                dfs(it, adj, vis);
            }
            
        }
        
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        vector<int> adj[n];
        
        // converting adjacency matrix to adjacency list
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                if(isConnected[i][j] == 1 && i != j){ // i!=j so that self connect na ho
                    
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    
                }
                
            }
        }
        
        int cnt = 0;
        vector<int> vis(n,0);
     
        for(int i=0; i<n; i++){
            
            if(vis[i] == 0){
                cnt++;
                dfs(i, adj, vis);
            }
            
        }
        
        return cnt;
        
    }
};