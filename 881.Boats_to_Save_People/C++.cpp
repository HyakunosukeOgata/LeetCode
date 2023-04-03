Runtime 90 ms Beats 52.24% 
Memory  42 MB Beats 11.29%

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;
        int head = 0;
        int tail = people.size()-1;
        sort(people.begin(), people.end());

        while(head <= tail){
            if (people[head] + people[tail] <= limit){
                head++;
            }
            tail--;
            ans++;
        }   
        return ans;
    }
};