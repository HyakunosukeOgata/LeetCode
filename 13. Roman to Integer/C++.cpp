class Solution {
    public:
        int romanToInt(string s) {
            unordered_map <char, int> map;
            map['I'] = 1;
            map['V'] = 5;
            map['X'] = 10;
            map['L'] = 50;
            map['C'] = 100;
            map['D'] = 500;
            map['M'] = 1000;
            int i = 0, ans = 0;
            while(i < s.length()){
                if (map[s[i]] < map[s[i + 1]]){
                    ans += map[s[i+1]] - map[s[i]];
                    i += 2;
                }else{
                    ans += map[s[i]];
                    i += 1;
                }
            }
            return ans;
        }
    };
    
    