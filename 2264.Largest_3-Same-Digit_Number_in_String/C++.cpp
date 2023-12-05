
Runtime  6 ms Beats 8.41% 
Memory 6.7 MB Beats 91.88%

class Solution {
public:
    string largestGoodInteger(string num) {
        bool have = false;
        string good = "000", buffer;
        for (int i = 0; i <= (int)num.size() - 3; ++i) {
            buffer = num.substr(i, 3);
            if (buffer[0] == buffer[1] && buffer[1] == buffer[2]) {
                have = true;
                good = max(good, buffer);
            }
        }
        return have ? good : "";
    }
};