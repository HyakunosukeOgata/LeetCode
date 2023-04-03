Runtime  0 ms Beats 100% 
Memory 7.6 MB Beats 84.84%

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (int stone:stones)
            pq.push(stone);
        while(pq.size() > 1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if (first > second){
                pq.push(first - second);
            }
        }
        if (pq.size() == 0)
            return 0;
        return pq.top();
    }
};