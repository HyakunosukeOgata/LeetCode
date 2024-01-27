class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 第一步：使用 unordered_map 計算每個元素的頻率
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // 第二步：構建最小堆來存儲頻率和元素的對
        // 使用優先隊列（最小堆）來存儲（頻率，元素）對
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // 第三步：遍歷頻率 map，將元素和頻率添加到最小堆中
        for (auto& it : frequencyMap) {
            minHeap.push({it.second, it.first});
            // 如果堆的大小超過 k，則移除堆頂元素（頻率最小的元素）
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // 第四步：提取堆中的元素，這些是頻率最高的 k 個元素
        vector<int> topKElements;
        while (!minHeap.empty()) {
            topKElements.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return topKElements;
    }
};

//------------------------------------------------------------------------------------

class Solution {
public:
    class mycomparison {
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; 
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> pri_que;

        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) { 
                pri_que.pop();
            }
        }

        vector<int> result(k);
        for (int i = k - 1; i >= 0; i--) {
            result[i] = pri_que.top().first;
            pri_que.pop();
        }
        return result;

    }
};