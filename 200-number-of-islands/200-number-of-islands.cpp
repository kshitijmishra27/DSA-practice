class Solution {
public:
    
    void dfs(int i, int j, vector<vector<char>> &grid){
        
        int n = grid.size(), m = grid[0].size();
        
        if(i<0 || i==n || j<0 || j==m || grid[i][j] == '0'){ // if out of bond or grid is water then do nothing
            return;
        }
        
        grid[i][j] = '0'; // after vising it make it 0 inorder to think that it is visited 
                        // we can also use visited array                    
        
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
                
                if(grid[i][j] == '1'){ // if it is land then do dfs and count the no. of islands
                   islands++;
                   dfs(i , j, grid);
                }
                
            }
        }
        
        return islands;
        
    }
};