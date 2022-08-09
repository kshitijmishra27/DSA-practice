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
            int time = q.front().second; //extracting time for latest time in front queue element so that we can update
            q.pop();
            
            ans = max(time, ans);  // maximing the ans for answer
            
            for(int i=0; i<4; i++){
                
                int nr = r + dr[i];  // neighbouring row
                int nc = c + dc[i];  // neighbouring column
            
                if(nr>=0 && nc >=0 && nr<n && nc < m && grid[nr][nc] != 2 && grid[nr][nc] != 0 ){ // not outof bound, not rotten, not empty,
                    
                    grid[nr][nc] = 2;   // make fresh orange into rotten one
                    cnt++;   // count of fresh orange we got in this one and only traversal
                    q.push( { {nr,nc}, time+1} );  // pushing neighbouring row, column for next queue and incresing the time
                    
                }
                
            }
            
        }
        
        if(cnt != fresh){  // total fresh oranges does not equal to frist bfs travelsal it means some oranges are untouched
            return -1;// so return -1 as ek bhi orange fresh nhi banna chahiye
        }
        
        return ans;  // max time return kardo
        
    }
};