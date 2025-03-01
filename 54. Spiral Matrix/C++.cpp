#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) 
            return result;
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size()-1;
        while(left <= right && top <= bottom){
            for (int i = left; i <= right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if (bottom >= top){
                for (int i = right; i >= left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
