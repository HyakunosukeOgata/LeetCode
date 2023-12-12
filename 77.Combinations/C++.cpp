Runtime 156 ms Beats 31.49% 
Memory 79.6 MB Beats 59.21%

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<vector<int>> combine(int n, int k) {
        backtracking(n, k, 1);
        return result;
    }
private:
    void backtracking(int n, int k, int startIndex);
};

void Solution::backtracking(int n, int k, int startIndex) {
    if (path.size() == k) {
        result.push_back(path);
        return;
    }
    for (int i = startIndex; i <= n; i++) {
        path.push_back(i);
        backtracking(n, k, i + 1);
        path.pop_back();
    }
}