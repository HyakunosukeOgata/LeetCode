class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_length = s.length();
        int t_length = t.length();

        int index_s = 0;
        int index_t = 0;

        while(index_s < s_length && index_t < t_length){
            if (s[index_s] == t[index_t]){
                index_t++;
            }
            index_s++;
        }
        return t_length - index_t;
    }
};