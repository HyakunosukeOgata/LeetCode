class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        int boxCount = 0;
        for (int index = 0; index < capacity.size() && totalApples > 0; index++) {
            totalApples -= capacity[index];
            ++boxCount;
        }
        
        return boxCount;
    }
};