Runtime  0 ms Beats 100%
Memory 6.3 MB Beats 73.9%

class Solution {
public:
    int numberOfMatches(int n) {
        int ans     =   0   ;
        int rev     =   0   ;
        while(n > 1) {
            rev     =   n >> 1  ;
            ans     +=  rev     ;
            n       -=  rev     ;
        }
        return ans;
    }
};