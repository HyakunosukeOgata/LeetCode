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

----------------------------------------------------------------

class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
        for (int i = 1; i <= s.size() / 2; i++) 
        {
            if (s.size() % i == 0) 
            {
                bool isValid = true;
                std::cout << "i = " << i << std::endl;
                for (int j = 0; j < s.size() - i; j++) 
                {
                    if (s[j] != s[j + i])
                    {
                        isValid = false;
                        break; 
                    }
                }
                if (isValid)
                {
                    return true; 
                }
            }
        }
        return false;
    }
};