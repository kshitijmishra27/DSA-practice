class Solution {
        private void dfs(int board[][],int r,int c){
            board[r][c] = 0;
            int n = board.length;
            int m = board[0].length;
            int X[] = new int[]{0,0,1,-1};
            int Y[] = new int[]{1,-1,0,0};

            //traversing in 4 directions
            for(int i=0;i<4;i++){
                int next_r = X[i] + r;
                int next_c = Y[i] + c;
                if(next_r >=0 && next_c >=0 && next_r < n && next_c < m && board[next_r][next_c] == 1){
                    dfs(board,next_r,next_c);
                }
            }
        }
       public int numEnclaves(int[][] board) {
        int n = board.length;
        if(n == 0) return 0;
        int m = board[0].length;
        
           /* Traversing boundaries which are 1s and connected to inner region containing 1 make them all 0 
           remaining regions 1 will be answer */
        for(int i=0;i<n;i++){
            //traversing left column
            if(board[i][0] == 1)
                dfs(board,i,0);
            
            //traversing right column
            if(board[i][m-1] == 1)
                dfs(board,i,m-1);
        }
        
        for(int i=0;i<m;i++){
            //traversing top row
            if(board[0][i] == 1)
                dfs(board,0,i);
            
            //traversing bottom row
            if(board[n-1][i] == 1)
                dfs(board,n-1,i);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == 1){
                    count += 1;
                }
            }
        }
          return count;
    }
}