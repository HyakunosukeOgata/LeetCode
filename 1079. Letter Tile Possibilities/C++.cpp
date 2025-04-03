class Solution {
    private:
        void backtrack(string& tiles, 
                        vector<bool> &used,
                        int &result)
        {
            for (int i = 0; i < tiles.length(); i++){
                if (used[i] == true){
                    continue;
                }
                if (i > 0 && 
                    tiles[i] == tiles[i-1] && 
                    used[i-1] == false)
                {
                    continue;
                }
                result++;
                used[i] = true;
                backtrack(tiles, used, result);    
                used[i] = false;
            }
        }
    public:
        int numTilePossibilities(string tiles) {
            sort(tiles.begin(), tiles.end());
            int result = 0;
            vector<bool> used(tiles.length(), false);
            backtrack(tiles, used, result);
            return result;
        }
    };