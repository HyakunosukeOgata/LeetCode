Runtime 19 ms Beats 56.69% 
Memory 8.8 MB Beats 78.37%

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> map;
        if (ransomNote.size() > magazine.size())
            return false;
        for (int index = 0; index < magazine.size(); index++)
            map[magazine[index] - 'a'] ++;

        for (int index = 0; index < ransomNote.size(); index++){
            if (map[ransomNote[index] - 'a'] <= 0)
                return false;
            else
                map[ransomNote[index] - 'a'] --;
        }
        return true;
    }
};