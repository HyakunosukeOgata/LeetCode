class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()){
            return false;
        }
        int dict[26] = {0};
        int diffIndex_1 = INT_MAX;
        int diffIndex_2 = INT_MAX;
        int diffCount   = 0;
        for (int i = 0; i < s1.length(); i++){
            if (s1[i] != s2[i]){
                diffCount++;
                if (diffIndex_1 == INT_MAX){
                    diffIndex_1 = i;
                }
                else{
                    diffIndex_2 = i;
                }
            }
        }

        if (diffCount > 2){
            return false;
        }
        else if (diffCount == 1){
            return false;
        }
        else if (diffCount == 0){
            return true;
        }
        else{
            if ((s1[diffIndex_1] != s2[diffIndex_2]) || (s2[diffIndex_1] != s1[diffIndex_2]))
                return false;
        }
        return true;
    }
};