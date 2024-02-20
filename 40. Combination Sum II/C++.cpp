class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    int sum = 0;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        CombineHelper(candidates, target, 0, sum);
        return ans;
    }
private:
    void CombineHelper(const vector<int> & candidates, const int k, int StartIndex, int sum){
        if (sum == k){
            ans.push_back(tmp);
            return;
        }
        for (int i = StartIndex; i < candidates.size() && sum + candidates[i] <= k; i++) {
            if (i > StartIndex && candidates[i] == candidates[i - 1])
                continue;
            sum += candidates[i];
            tmp.push_back(candidates[i]);
            CombineHelper(candidates, k, i + 1, sum);
            sum -= candidates[i];
            tmp.pop_back();
            
        }
    }
};