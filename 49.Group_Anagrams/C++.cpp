Runtime 38 ms  Beats 66.92% 
Memory 20.7 MB Beats 47.39%

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map < string, vector<string>> map;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(strs[i]);
        }

        vector< vector< string >> ans;
        for(auto i : map)
            ans.push_back(i.second);
        return ans;
    }
};