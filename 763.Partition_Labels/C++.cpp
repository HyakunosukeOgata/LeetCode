class Solution {
public:
    vector<int> partitionLabels(string S) {
        int hash[27] = {0}  ;
        for (int i = 0; i < S.size(); i++) { 
            hash[S[i] - 'a'] = i;
        }

        vector<int> result;
        int left    = 0 ;
        int right   = 0 ;
        for (int i = 0; i < S.size(); i++) {
            right = max(right, hash[S[i] - 'a']); 
            if (i == right) {
                result.push_back(right - left + 1);
                left = i + 1;
            }
        }
        return result;
    }
};