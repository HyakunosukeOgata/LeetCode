Runtime 0 ms Beats 100% 
Memory 6.7 MB Beats 81.66%

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> ans;
        if (numRows == 0)
            return ans;
        if (numRows == 1)  
            return {{1}};
        if (numRows == 2)  
            return {{1}, {1,1}};
        ans.push_back({1});
        ans.push_back({1,1});
        for (int index_ans = 2; index_ans < numRows; index_ans++){
            vector <int> vector_temp;
            vector_temp.push_back(1);
            for (int index_vector_temp = 1; index_vector_temp < ans[index_ans-1].size(); index_vector_temp++){
                vector_temp.push_back(ans[index_ans-1][index_vector_temp-1] + ans[index_ans-1][index_vector_temp]);
            }
            vector_temp.push_back(1);
            ans.push_back(vector_temp);
        }
        return ans;
    }
};