class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int StringLength = s.length();
        for (int i = 1; i <= StringLength / 2; i++) {
            if (StringLength % i == 0) {
                string subStr = s.substr(0, i);
                string repeated = "";
                for (int j = 0; j < StringLength / i; j++) {
                    repeated += subStr;
                }
                if (s == repeated) {
                    return true;
                }
            }
        }
        return false;
    }
};
