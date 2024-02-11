class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int currentCount = 0;
        int maxLength = 0;
        for (int right = 0; right < s.length(); right++) {
            if (isVowel(s[right])) {
                currentCount++;
            }
            if (right - left + 1 > k) {
                if (isVowel(s[left])) {
                    currentCount--;
                }
                left++;
            }
            maxLength = max(maxLength, currentCount);
        }
        return maxLength;
    }
private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
