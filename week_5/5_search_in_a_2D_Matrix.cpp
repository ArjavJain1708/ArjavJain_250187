class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int m=matrix.size();
        int n=matrix[0].size();
        int high=m-1;
        int low=0;
        int mid;
      int targetRow = -1;
      int firstidx;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                targetRow = mid;
                break;
            } else if (target < matrix[mid][0]) {
                high = mid - 1; 
            } else {
                low = mid + 1; 
            }
        }
        
       
        if (targetRow == -1) return false;
        firstidx=targetRow;
       int col_low = 0;
        int col_high = n - 1;
        
        while(col_low <= col_high) {
            int mid_col = col_low + (col_high - col_low) / 2;
            if(matrix[firstidx][mid_col] > target) {
                col_high = mid_col - 1;
            }
            else if(matrix[firstidx][mid_col] < target) {
                col_low = mid_col + 1;
            }
            else {
                return true; 
            }
        }
   return false; }
};