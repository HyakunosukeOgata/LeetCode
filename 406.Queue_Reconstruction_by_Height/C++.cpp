class Solution {
public:

    static bool cmp(const vector<int>& a, const vector<int>& b){
        if (a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort (people.begin(), people.end(), cmp);
        list<vector<int>> que;
        for (int index = 0; index < people.size(); index++){
            int position = people[index][1];
            std::list<vector<int>>::iterator it;
            it = que.begin();
            while(position){
                position--;
                it++;
            }
            que.insert(it, people[index]);
        }
        return vector<vector<int>>(que.begin(), que.end());
    }
};