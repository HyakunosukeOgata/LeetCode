class Solution {
public:
    int compress(vector<char>& chars) {
        int left    =   0   ;
        int write   =   0   ;
        while(left < chars.size()){
            int count = 0   ;
            char temp = chars[left];
            while(left < chars.size() && chars[left] == temp){
                count   ++  ;
                left    ++  ;
            }
            chars[write++] = temp;
            if (count > 1){
                for (char c : to_string(count)) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};
