class Solution {
    public:
        string clearDigits(string s) {
            stack<char> st;
            for(char ch:s) {
                if('0' <= ch && ch <= '9') {
                    st.pop();
                }
                else {
                    st.push(ch);
                }
            }
    
            string ans = "";
            while(st.empty() == false) {
                char ch = st.top();
                ans += ch;
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    };