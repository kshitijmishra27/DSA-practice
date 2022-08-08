class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
      int n = grid.size();
      int m = grid[0].size();
       
        queue< pair< pair<int,int> , int> > q;
        int fresh = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j] == 2){
                    q.push( {{i,j}, 0}) ; //storing  location + time
                }
                else if(grid[i][j] == 1){
                    fresh++; // counting the fresh oranges
                }
                
            }
        }
        
        int dr[] = {-1, 0 , 1 ,0};
        int dc[] = {0 , 1, 0 , -1};
        int cnt = 0;
        int ans = 0;

        
        while(!q.empty()){
            
            int r = q.front().first.first; // front queue ke elements
            int c = q.front().first.second;
            int time = q.front().second;
            q.pop();
            
            ans = max(time, ans);
            
            for(int i=0; i<4; i++){
                
                int nr = r + dr[i];  // neighbouring row
                int nc = c + dc[i];  // neighbouring column
            
                if(nr>=0 && nc >=0 && nr<n && nc < m && grid[nr][nc] != 2 && grid[nr][nc] != 0 ){
                    
                    grid[nr][nc] = 2;
                    cnt++;
                    q.push( { {nr,nc}, time+1} );
                    
                }
                
            }
            
        }
        
        if(cnt != fresh){
            return -1;
        }
        
        return ans;
        
    }
};