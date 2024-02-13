class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto& word : words) {
            if (isPalindrome(word)) {
                return word;
            }
        }
        return "";
    }

private:
    bool isPalindrome(const string& s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
