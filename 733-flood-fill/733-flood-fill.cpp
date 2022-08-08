class Solution {
public:
    
    void dfs(vector<vector<int>> &image, int i, int j, int initial, int color){
        
        int n = image.size();
        int m = image[0].size();
        
        if(i == n || j == m || i<0 || j<0 || image[i][j] != initial || image[i][j] == color){
            return;
        }
        
        image[i][j] = color;
        
        dfs(image, i+1, j, initial, color); // down
        dfs(image, i-1, j, initial ,color); // up
        dfs(image, i, j+1, initial, color); // left
        dfs(image, i, j-1, initial, color); // right
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc] == color){
            return image;
        }
        
        int initial = image[sr][sc];
        int i = sr;
        int j = sc;
        
        dfs(image, i, j , initial, color);
        
        return image;
        
    }
};