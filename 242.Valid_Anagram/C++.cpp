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

//-----------------------------------------------------------------------
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> table_s(26, 0); 
        vector<int> table_t(26, 0); 

        for (int index = 0; index < s.length(); index++) {
            table_s[s[index] - 'a']++;
            table_t[t[index] - 'a']++;
        }

        return table_s == table_t;
    }
};
