class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int height = matrix.size();
            int width  = matrix[0].size();
    
            bool firstRowZero = false;
            bool firstColZero = false;
    
            for (int i = 0; i < height; i++){
                if (matrix[i][0] == 0){
                    firstColZero = true;
                    break;
                }
            }
            for (int i = 0; i < width; i++){
                if (matrix[0][i] == 0){
                    firstRowZero = true;
                    break;
                }
            }
    
            for (int i = 1; i < height; i++) {
                for (int j = 1; j < width; j++) {
                    if (matrix[i][j] == 0) {
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }
    
            for (int i = 1; i < height; i++) {
                for (int j = 1; j < width; j++) {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
    
            if (firstColZero) {
                for (int i = 0; i < height; i++) {
                    matrix[i][0] = 0;
                }
            }
            if (firstRowZero) {
                for (int j = 0; j < width; j++) {
                    matrix[0][j] = 0;
                }
            }
    
        }
    };