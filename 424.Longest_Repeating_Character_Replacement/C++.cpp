Runtime  6 ms Beats 87.15% 
Memory 6.9 MB Beats 99.15%

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <unsigned int> table(26)  ;
        unsigned int begin      = 0 ;
        unsigned int end        = 0 ;
        unsigned int ans        = 0 ;
        unsigned int max_table  = 0 ;

        while(end < s.size())
        {
            table[s[end] - 'A'] ++  ;
            max_table = max(max_table, table[s[end] - 'A']);
            if (end - begin - max_table + 1 <= k){
                ans = max(ans, end - begin + 1) ;
            }
            else{
                table[s[begin] - 'A'] --    ;
                begin   ++  ;
            }
            end ++  ;
        }
        return ans;
    }
};