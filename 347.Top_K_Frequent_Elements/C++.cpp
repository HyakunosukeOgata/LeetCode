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