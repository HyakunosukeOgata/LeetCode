class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        for (int num : arr) {
            countMap[num]++;
        }

        set<int> occurrences; 
        for (auto& entry : countMap) {
            occurrences.insert(entry.second);
        }

        return occurrences.size() == countMap.size();
    }
};
