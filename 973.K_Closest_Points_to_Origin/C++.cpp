Runtime 156 ms Beats 85.56% 
Memory 62.8 MB Beats 83.10%

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int,  int>> pq;
        for (int i = 0; i < points.size(); i++){
            int t = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({t, i});
            if (pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            auto t = pq.top();
            pq.pop();
            res.push_back(points[t.second]);
        }
        return res;
    }
};