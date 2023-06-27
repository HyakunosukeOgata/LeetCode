Runtime  20 ms Beats 31.8% 
Memory 7.1 MB Beats 90.95%

using namespace std;
class Solution {
    bool compare(int s1_arr[26], int s2_arr[26]){
        for (int index = 0; index < 26; index++){
            if(s1_arr[index] != s2_arr[index]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length())
            return false;

        int table_s1[26] = {0};
        int table_s2[26] = {0};
        for (unsigned int index = 0; index < s1.length(); index++){
            table_s1[s1[index] - 'a'] ++; 
        }
        int begin  = 0 ;
        int end    = s1.length() - 1 ;
        
        for (unsigned int index = 0; index < s1.length() - 1; index++){
            table_s2[s2[index] - 'a'] ++; 
        }

        while (end < s2.length()){
            int newChar = s2[end] - 'a';
            table_s2[newChar] ++;
            cout << endl;
            int result = compare(table_s1, table_s2);
            if (result){
                return true;
            }
            int oldChar = s2[begin] - 'a';
            table_s2[oldChar] --;
            end++;
            begin++;
        }
    return false;
    }
};