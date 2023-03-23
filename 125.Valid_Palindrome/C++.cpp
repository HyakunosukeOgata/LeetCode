Runtime 5 ms  Beats 68.65% 
Memory 7.4 MB Beats 59.44%

class Solution {
public:
    bool isPalindrome(string s) {
        int head = 0 ;
        int tail = s.length()-1;
        while(head < tail){
            while(head < tail && !isalnum(s[head])){
                head++;
            }
            while(head < tail && !isalnum(s[tail])){
                tail--;
            }
            if (head < tail ){
                if (tolower(s[head]) != tolower(s[tail])){
                    return false;
                }
                ++head;
                --tail;
            }
        }
        return true;
    }
};