Runtime 11 ms Beats 96.9% 
Memory 13.8 MB Beats 51.93%

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        int len_size_nums = nums.size();
        for (int index = 0; index < len_size_nums; index++){
            map[nums[index]] ++;
        }
        
        vector <int> res;
        priority_queue <pair <int, int>> pq;
        for(auto i = map.begin(); i != map.end(); i++){
            pq.push(make_pair(i->second, i->first));
            if (pq.size() > (int) map.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};

Runtime 10 ms Beats 80.65% 
Memory  14 MB Beats 89.51%

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