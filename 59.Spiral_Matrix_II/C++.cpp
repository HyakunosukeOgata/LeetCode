class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int offset = 1;

        int startx = 0; 
        int starty = 0;

        int loop   = n >> 1;  

        int value  = 1;

        vector<vector<int>> ans(n, vector<int>(n, 0));
    
        while(loop > 0){
            for (int index_right = starty; index_right < n - offset; index_right++){
                ans[startx][index_right] = value++;
            }
            for (int index_down  = startx; index_down  < n - offset; index_down++){
                ans[index_down][starts]  = value++;
            }
        }
        
    }
};