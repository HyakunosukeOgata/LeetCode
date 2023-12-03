Runtime 0 ms  Beats 100% 
Memory 7.3 MB Beats 96.61% 

class Solution {
public:
    void reverse(string& s, int start, int end){ 
        for (int i = start, j = end; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
    void removeExtraSpaces(string& s) {
        int slow = 0;
        for (int fast = 0; fast < s.size(); ++fast) {
            if (s[fast]!=' '){
                if (slow != 0){
                    s[slow++] = ' ';
                }
                while(fast < s.size() && s[fast]!=' '){
                    s[slow++] = s[fast++];
                }
            }
        }
        s.resize(slow); 
    }
    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.size() - 1);
        int start = 0;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s, start, i - 1); 
                start = i + 1; 
            }
        }
        return s;
    }

};