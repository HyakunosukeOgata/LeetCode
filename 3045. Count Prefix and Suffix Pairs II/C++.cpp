class Solution {
public:
    bool isPrefixAndSuffix(std::string & str1, std::string & str2);
    long long countPrefixSuffixPairs(vector<string>& words) {
        long long ans = 0;
        for (int i = 0; i < words.size(); ++i){
            for (int j = i+1; j < words.size(); ++j){
                bool flag = isPrefixAndSuffix(words[i], words[j]);
                if (flag)
                    ans++;
            }
        }
        return ans;
    }
    
};

bool Solution::isPrefixAndSuffix (std::string & str1, std::string & str2){
    if (str1.length() > str2.length()){
        return false;
    }
    return str2.substr(0, str1.size()) == str1 && str2.substr(str2.size() - str1.size()) == str1;
}