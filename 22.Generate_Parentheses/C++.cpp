Runtime 0 ms Beats 100% 
Memory 13.7 MB Beats 48.20%

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generateParenthesisDFS((unsigned char) n, (unsigned char) n, "", ans);
        return ans;
    }
    void generateParenthesisDFS(int left, int right, string str, vector<string> &ans) {
        if (left > right){
            return;
        }
        if (left == 0 && right == 0){
            ans.push_back(str);
        }
        else{
            if (left > 0){
                generateParenthesisDFS(left - 1, right, str + '(', ans);
            }
            if (right > 0){
                generateParenthesisDFS(left, right - 1, str + ')', ans);
            }
        }
    }
};