class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    int sum = 0;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        CombineHelper(candidates, target, sum, 0);
        return ans;
    }
private:
    void CombineHelper(vector<int>& candidates, int target,int sum, int StartIndex){
        if (sum == target){
            ans.push_back(tmp);
            return;
        }
        else if (sum > target) {
            return;
        }
        for (int i = StartIndex; i < candidates.size(); i++) {
            sum += candidates[i];
            tmp.push_back(candidates[i]);
            CombineHelper(candidates, target, sum, i);
            sum -= candidates[i];
            tmp.pop_back();
        }
    }
};