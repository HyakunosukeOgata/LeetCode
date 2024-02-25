class Solution {
public:
    string frequencySort(string s) {
        // 統計每個字符出現的次數
        unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }

        // 將字符及其頻率轉移到一個vector中
        vector<pair<char, int>> freqVec;
        for (auto& it : freqMap) {
            freqVec.push_back(it);
        }

        // 根據頻率對vector進行排序，如果頻率相同，則按字符順序排序
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        });

        // 重建字符串
        string result;
        for (auto& it : freqVec) {
            result += string(it.second, it.first);
        }

        return result;
    }
};