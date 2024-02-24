class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stk;
        for (int ast : asteroids) {
            bool isDestory = 0;
            while(!stk.empty() &&  ast < 0 && stk.back() > 0){
                if (abs(ast) > abs(stk.back())){
                    stk.pop_back();
                    continue;
                }
                else if (abs(ast) == abs(stk.back())){
                    stk.pop_back();
                }
                isDestory = 1;
                break;
            }
            if(!isDestory)
                stk.push_back(ast);
        }   
        return stk;
    }
};