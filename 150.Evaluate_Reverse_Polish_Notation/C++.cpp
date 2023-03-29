Runtime 10 ms Beats 71.93% 
Memory  12 MB Beats 37.8%

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stk;
        int temp1;
        int temp2;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "/" || tokens[i] == "*"){
                temp2 = stk.top();
                stk.pop();
                temp1 = stk.top();
                stk.pop();
                if (tokens[i] == "-")
                    stk.push(temp1 - temp2);
                else if (tokens[i] == "/")
                    stk.push(temp1 / temp2);
                else if (tokens[i] == "*")
                    stk.push(temp1 * temp2);
                else if (tokens[i] == "+")
                    stk.push(temp1 + temp2);
            }
            else {
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};