Runtime 0 ms Beats 100% 
Memory 6.4 MB Beats 52.89%

class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        for (auto c : s){
            if (c == '(' || c == '[' || c == '{'){
                stack.push(c);
            }
            else{
                if (stack.empty() || (c == ')' && stack.top() != '(') || (c == ']' && stack.top() != '[') || (c == '}' && stack.top() != '{')){
                    return false;
                }
                stack.pop();
            } 
        }
        return stack.empty();
    }
}; 