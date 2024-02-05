class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1; // Initialize two pointers, one at the start and one at the end

        while (i < j) {
            // Move the start pointer forward until it points to a vowel or passes the end pointer
            while (i < j && !isVowel(s[i])) {
                i++;
            }

            // Move the end pointer backward until it points to a vowel or is less than the start pointer
            while (i < j && !isVowel(s[j])) {
                j--;
            }

            // If both pointers point to a vowel and the start pointer is before the end pointer, swap the vowels
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s; 
    }

private:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
