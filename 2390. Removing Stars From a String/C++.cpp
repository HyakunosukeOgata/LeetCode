class Solution {
public:
    string removeStars(string s) {
        string ans (s.length(), 0);
        int ans_length = 0;
        for (auto c : s){
            if (c == '*'){
                ans_length --;
            }
            else{
                ans[ans_length] = c;
                ans_length ++;
            }
        }
        ans.resize(ans_length);
        return ans;
    }
};