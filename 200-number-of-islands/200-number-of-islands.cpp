class Solution {
public:
    
    void dfs(int i, int j, vector<vector<char>> &grid){
        
        int n = grid.size(), m = grid[0].size();
        
        if(i<0 || i==n || j<0 || j==m || grid[i][j] == '0'){
            return;
        }
        
        grid[i][j] = '0';
        
        dfs(i-1, j, grid); // up
        dfs(i+1, j, grid); // down
        dfs(i, j-1, grid); // left
        dfs(i, j+1, grid); // right;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int islands = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j] == '1'){
                   islands++;
                    dfs(i , j, grid);
                }
                
            }
        }
        
        return islands;
        
    }
};