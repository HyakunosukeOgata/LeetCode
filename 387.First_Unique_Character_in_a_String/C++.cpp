Runtime 50 ms Beats 39.12% 
Memory 10.8 MB Beats 44.19%

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> map_record;
        for (int index = 0; index < s.length(); index++){
            map_record[s[index]]++;
        }
        for (int index = 0; index < s.length(); index++){
            if (map_record[s[index]]==1){
                return index;
            }
        }
        return -1;
    }
};