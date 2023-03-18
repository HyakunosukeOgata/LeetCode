Runtime 9 ms  Beats 71.39% 
Memory 7.2 MB Beats 97.75%

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map <char, int> letter;
        for (int index = 0; index < s.length(); index++){
            letter[s[index]] ++;
            letter[t[index]] --;
        }
        for (auto s:letter){
            if (s.second != 0)
                return false;
        }
        return true;
        
    }
};