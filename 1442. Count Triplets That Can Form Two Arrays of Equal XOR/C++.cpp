class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixXor(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            prefixXor[i + 1] = prefixXor[i] ^ arr[i];
        }
        
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            for (int k = i + 1; k < n; ++k) {
                if (prefixXor[i] == prefixXor[k + 1]) {
                    count += (k - i);
                }
            }
        }
        
        return count;
    }
};
