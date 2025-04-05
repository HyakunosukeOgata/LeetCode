#include <queue>
using namespace std;

class RecentCounter {
private:
    queue<int> requests;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        requests.push(t);
        while (!requests.empty() && requests.front() < t - 3000) {
            requests.pop();
        }
        return requests.size();
    }
};
