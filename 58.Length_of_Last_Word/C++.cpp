class Solution {
    public:
        int lengthOfLastWord(string s) {
            int flag = 0;
            int ans = 0;
    
            for (int i = s.length() - 1; i >= 0; i--) {
                if (!flag && s[i] != ' ') {
                    flag = 1;
                }
                if (flag && s[i] != ' ') { 
                    ans++;
                }
                if (flag && s[i] == ' ') { 
                    break;
                }
            }
    
            return ans;
        }
    };
    