Runtime 0 ms Beats 100% 
Memory 6.6 MB Beats 57.7%

class Solution {
public:
    int lengthOfLastWord(string s) {
        int temp = 0;
        reverse(s.begin(),s.end());
        for(int i =  0; i < s.size(); i++){
            if(s[i]!=' '){
                temp++;
            }
            else{
                if(temp != 0)
                    break;
            }
        }
        return temp;
    }
};