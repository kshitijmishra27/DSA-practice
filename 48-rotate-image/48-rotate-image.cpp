class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        for(int j = 0; j < matrix.size() ; j++){
            
            for(int i = matrix.size()-1; i>=0; i--){
                
                temp.push_back(matrix[i][j]);
                
            }
            
            ans.push_back(temp);
            temp.clear();
            
        }
        
        matrix = ans;
        
    }
};