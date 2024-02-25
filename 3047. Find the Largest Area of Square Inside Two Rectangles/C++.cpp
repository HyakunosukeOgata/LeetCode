class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
    int n = bottomLeft.size();
    long long max_area = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            long long area = intersect_area(bottomLeft[i], topRight[i], bottomLeft[j], topRight[j]);
            max_area = max(max_area, area);
        }
    }
    
    return max_area;
    }
private:
    long long intersect_area(vector<int>& bottomLeft1, vector<int>& topRight1, vector<int>& bottomLeft2, vector<int>& topRight2);
};

long long Solution::intersect_area(vector<int>& bottomLeft1, vector<int>& topRight1, vector<int>& bottomLeft2, vector<int>& topRight2) {
    long long intersectBottomLeftX = max(bottomLeft1[0], bottomLeft2[0]);
    long long intersectBottomLeftY = max(bottomLeft1[1], bottomLeft2[1]);
    long long intersectTopRightX = min(topRight1[0], topRight2[0]);
    long long intersectTopRightY = min(topRight1[1], topRight2[1]);
    
    long long width = intersectTopRightX - intersectBottomLeftX;
    long long height = intersectTopRightY - intersectBottomLeftY;
    
    if (width <= 0 || height <= 0) {
        return 0;
    }
    
    return (long long)(min(width, height) * min(width, height));
}
