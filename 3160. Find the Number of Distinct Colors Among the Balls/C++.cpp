class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            unordered_map<int, int> ball_color;
            unordered_map<int, int> color_count;
            vector<int> result;
    
            for (const auto& query : queries) {
                int ball = query[0]
                int color = query[1];
    
                if (ball_color.find(ball) != ball_color.end()) {
                    int prev_color = ball_color[ball];
                    if (--color_count[prev_color] == 0) {
                        color_count.erase(prev_color);
                    }
                }
    
                ball_color[ball] = color;
                color_count[color]++;
    
                result.push_back(color_count.size());
            }
    
            return result;
        }
    };