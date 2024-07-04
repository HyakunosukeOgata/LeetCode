class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string result = "";
        int index = 0;
        
        while (index < s.length()) {
            if (isdigit(s[index])) {
                int count = 0;
                while (isdigit(s[index])) {
                    count *= 10;
                    count += s[index] - '0'; 
                    index++;
                }
                counts.push(count);
            } 
            else if (s[index] == '[') {
                resultStack.push(result);
                result = "";
                index++;
            } 
            else if (s[index] == ']') {
                string temp = resultStack.top();
                resultStack.pop();
                int count = counts.top();
                counts.pop();
                for (int i = 0; i < count; i++) {
                    temp += result;
                }
                result = temp;
                index++;
            } 
            else {
                result += s[index];
                index++;
            }
        }
        return result;
    }
};
