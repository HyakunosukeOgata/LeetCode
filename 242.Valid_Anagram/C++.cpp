class Solution {
public:
	// Time: O(nlogn)
    // Space: O(1)
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.size(); i++){
            if (s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
	
	// Time: O(n)
    // Space: O(1)
	bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
		unordered_map<char, int> map;   
		int n = s.size();
		for (int i = 0; i < n; i++){
			map[s[i]] ++;
		}
		for (int i = 0; i < n; i++){
			if (map.find(t[i]) == map.end()){
				return false;
			}
			else if (map[t[i]] > 0){
				map[t[i]] --;
			}else {
				return false;
			}
		}
		return true;
	}
	
	// Time: O(n)
    // Space: O(1)
	bool isAnagram(string s, string t) {
		if (s.size() != t.size()) 
			return false;

		int cnt[26] = {0};
		for (char c : s) 
			cnt[c - 'a']++;
		for (char c : t) {
			if (--cnt[c - 'a'] < 0) 
				return false;
		}
		return true;
	}
};
