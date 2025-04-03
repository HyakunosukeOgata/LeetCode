class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int countW = 0;
            int minW = INT_MAX;
    
            for (int i = 0; i < k; i++) {
                if (blocks[i] == 'W') 
                    countW++;
            }
            minW = countW;
    
            for (int i = k; i < blocks.size(); i++) {
                if (blocks[i-k] == 'W')
                    countW--;
                if (blocks[i] == 'W')
                    countW++;
                minW = min(countW, minW);
            }
    
            return minW;
        }
    };
    