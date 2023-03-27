Runtime 35 ms  Beats 32.13% 
Memory 10.9 MB Beats 27.84%

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> set;
        int left  = 0;
        int right = 0;
        int ans   = 0;
        while(right < s.size()){
            while(set.find(s[right]) != set.end()){
                set.erase(s[left]);
                left++;
            }
            ans = max (ans, right - left + 1);
            set.insert(s[right]);
            right++;
        }
        return ans;
    }
};