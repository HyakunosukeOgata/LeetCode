Runtime 3 ms Beats 92.37% 
Memory 9.3 MB Beats 27.95%

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len_strs = strs.size();
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string final = strs[len_strs - 1];
        for (int i = 0; i < first.size(); i++){
            if (first[i] == final[i]){
                ans += first[i];
            }
            else
                break;
        }
        return ans;
    }
}; 