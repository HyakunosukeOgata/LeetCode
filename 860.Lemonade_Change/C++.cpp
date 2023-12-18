class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> wallet = {0,0};
        for (int index = 0; index < bills.size(); index++){
            if (bills[index] == 5){
                wallet[0]++;
            }
            else if (bills[index] == 10){
                if (wallet[0] == 0 ){
                    return false;
                }
                else{
                    wallet[0]--;
                    wallet[1]++;
                }
            }
            else if (bills[index] == 20){
                if ((wallet[0] == 0) || (wallet[1] == 0 && wallet[0] < 3)){
                    return false;
                }
                else if (wallet[1] > 0){
                    wallet[1]--;
                    wallet[0]--;
                }
                else{
                    wallet[0]-=3;
                }
            }
        }

        return true;
    }
};