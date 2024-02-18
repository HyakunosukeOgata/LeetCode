class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int longestPrefix = 0;
        for (int i = 0; i < arr1.size(); i++) {
            string str1 = to_string(arr1[i]);
            for (int j = 0; j < arr2.size(); j++) {
                string str2 = to_string(arr2[j]);
                int prefixLength = 0;
                while (prefixLength < str1.length() && prefixLength < str2.length() && str1[prefixLength] == str2[prefixLength]) {
                    prefixLength++;
                }
                longestPrefix = max(longestPrefix, prefixLength);
            }
        }
        return longestPrefix;
    }
};


//----------------------------------------------------------------

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> st;

        for (auto it : arr1) {
            string s = to_string(it);
            while (s.length() > 0) {
                st.insert(s);
                s.pop_back();
            }
        }

        int ans = 0;
        
        for (auto it : arr2) {
            string s = to_string(it);
            while (s.length() > 0) {
                if (st.find(s) != st.end()) {
                    ans = max(ans, (int)s.length()); 
                    break; 
                } else {
                    s.pop_back();
                }
            }
        }

        return ans;
    }
};
