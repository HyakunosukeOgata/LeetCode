class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        int s_length = s.length();
        for (int index = 0; index < s_length; index++) {
            if (stk.empty() || stk.top() != s[index]) {
                stk.push(s[index]);
            } else {
                stk.pop();
            }
        }

        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};

//-----------------------------------------------------------------------

class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        for (int j = 0; j < s.length(); j++) {
            if (i > 0 && s[i - 1] == s[j]) {
                i--;  
            } else {
                s[i++] = s[j]; 
            }
        }
        return s.substr(0, i); 
    }
};