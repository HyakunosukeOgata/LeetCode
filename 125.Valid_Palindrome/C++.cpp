Runtime 6 ms  Beats 58.58% 
Memory 7.2 MB Beats 93.87%
 
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
            if (tolower(s[head]) != tolower(s[tail]))
                return false;
            head++;
            tail--;
        }
        return true;
    }
};