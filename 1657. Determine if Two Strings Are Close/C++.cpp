class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;
        int mp1[26] = {0};
        int mp2[26] = {0};
        for (int index = 0; index < word1.length(); index++){
            mp1[word1[index] - 'a'] ++;
            mp2[word2[index] - 'a'] ++;
        }
        for (int index = 0; index < 26; index++){
            if (mp1[index] == 0 && mp2[index] || mp2[index] == 0 && mp1[index]){
                return false;
            }
        }
        sort (mp1, mp1+26);
        sort (mp2, mp2+26);
        for (int index = 0; index < 26; index++){
            if (mp1[index] != mp2[index]){
                return false;
            }
        }
        return true;
    }
};