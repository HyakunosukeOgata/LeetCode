Runtime 5 ms  Beats 53.68% 
Memory 9.5 MB Beats 59.61%

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left  = 0;
        int right = m * n - 1;

        if (m == 0)
            return false;
        
        while(left <= right){
            int mid = (left + right) >> 1;
            int i = mid / n;
            int j = mid - i * n;
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};