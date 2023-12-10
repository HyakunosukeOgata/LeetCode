class Solution {
private:
    vector<string> result;
    string s;
    const string letterMap[10] = {
        "", // 0
        "", // 1
        "abc", // 2
        "def", // 3
        "ghi", // 4
        "jkl", // 5
        "mno", // 6
        "pqrs", // 7
        "tuv", // 8
        "wxyz", // 9
    };
    void backtracking(const string& digits, int index);

public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return result;
        }
        backtracking(digits, 0);
        return result;
    }
};

void Solution::backtracking(const string& digits, int index) {
    if (index == digits.size()) {
        result.push_back(s);
        return;
    }
    int digit = digits[index] - '0';        
    string letters = letterMap[digit];     
    for (int i = 0; i < letters.size(); i++) {
        s.push_back(letters[i]);            
        backtracking(digits, index + 1);    
        s.pop_back();                       
    }
}