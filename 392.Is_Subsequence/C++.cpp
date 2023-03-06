Runtime 0 ms Beats 100% 
Memory 6.4 MB Beats 74.15%

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int string_s_length = s.length();
        int string_s_target = 0;

        int string_t_length = t.length();
        
        for (int index = 0; index < string_t_length; index ++){
            if (t[index] == s[string_s_target]){
                string_s_target += 1;
            }
        }
        if (string_s_target == string_s_length)
            return true;
        return false;
    }
};