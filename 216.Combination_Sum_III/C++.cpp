class Solution {
private:
    void backtracking(int targetSum, int k, int sum, int startIndex);
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(n, k, 0, 1);
        return result;
    }
};

void Solution::backtracking(int targetSum, int k, int sum, int startIndex) {
    if (path.size() == k) {
        if (sum == targetSum) 
            result.push_back(path);
        return; 
    }
    for (int i = startIndex; i <= 9; i++) {
        sum += i; 
        path.push_back(i);
        backtracking(targetSum, k, sum, i + 1);
        sum -= i; 
        path.pop_back(); 
    }
}