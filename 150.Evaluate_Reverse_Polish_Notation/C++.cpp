class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (const auto& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                if (st.size() < 2) {
                    throw runtime_error("Invalid RPN expression.");
                }
                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();
                switch (token[0]) {
                    case '+': st.push(num2 + num1); break;
                    case '-': st.push(num2 - num1); break;
                    case '*': st.push(num2 * num1); break;
                    case '/': 
                        if (num1 == 0) throw runtime_error("Division by zero.");
                        st.push(num2 / num1); 
                        break;
                }
            } else {
                st.push(stoi(token));
            }
        }

        if (st.size() != 1) {
            throw runtime_error("Invalid RPN expression.");
        }
        return static_cast<int>(st.top());
    }
};