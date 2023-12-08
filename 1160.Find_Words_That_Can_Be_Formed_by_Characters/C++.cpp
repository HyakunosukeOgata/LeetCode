Runtime  85 ms Beats 35.40% 
Memory 29.7 MB Beats 34.5%

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        unordered_map <char, int> charsFreq;
        for (auto c : chars){
            charsFreq[c]++ ;
        }

        for (auto word : words){
            unordered_map<char, int> wordFreq;
            bool valid = true;
            for (char c : word) {
                wordFreq[c]++;
                if (wordFreq[c] > charsFreq[c]) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                result += word.size();
            }
        }
        return result;
    }
};