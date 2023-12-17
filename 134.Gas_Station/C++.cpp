class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cursum = 0  ;
        int totsum = 0  ;
        int start  = 0  ;
        for (int index = 0; index < gas.size(); ++index){
            cursum += gas[index] - cost[index];
            totsum += gas[index] - cost[index];
            if(cursum < 0){
                start = index + 1;
                cursum = 0;
            }
        }    
        if (totsum < 0) 
            return -1; 
        return start;
    }
};