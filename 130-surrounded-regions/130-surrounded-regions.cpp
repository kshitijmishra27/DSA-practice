class Solution {
public:
    
    void dfs(int i, int j , vector<vector<int>> &vis, vector<vector<char>> &board){
        
        int n = board.size();
        int m = board[0].size();
        
        if(i >=n || i < 0 || j <0 || j>=m || vis[i][j] == 1 || board[i][j] == 'X'){
            return ;
        }
        
        vis[i][j] = 1;
        
         dfs(i+1, j, vis, board);
         dfs(i-1, j, vis, board);
         dfs(i, j-1, vis, board);
         dfs(i, j+1, vis, board);
        
    }
    
    void solve(vector<vector<char>>& board) {
 
         int n = board.size();
        int m = board[0].size(); 
        
           vector<vector<int>> vis( n , vector<int> (m , 0));
       
  for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
          
          if( (i==0 || j==0 || i== n-1 || j == m-1) && board[i][j] == 'O'){
              dfs(i , j , vis, board);
          }
          
      }
  }
       
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               
               if(vis[i][j] == 0 && board[i][j] == 'O'){
                   board[i][j] = 'X';
               }
               
           }
       }
        
    }
};