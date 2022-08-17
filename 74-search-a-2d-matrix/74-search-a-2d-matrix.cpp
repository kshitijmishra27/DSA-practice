class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int r = matrix.size(), c = matrix[0].size();
        
        int low = 0, high = r*c - 1;
        
        while(low <= high ){
            
         int mid = (low + high) / 2;
            
            if(matrix[mid / c][mid % c] == target) return true;
            
// mid/c for row and mid % c for col
            
            else if(matrix[ mid / c ][ mid % c] < target) low  = mid + 1;
            
            else high = mid - 1 ;
            
        }
        
        return false;
        
    }
};