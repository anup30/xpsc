// week 2, Topicwise Problem 3
// D. Epic Transformation
#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : cnt) pq.push(y);        
        while (pq.size() > 1){
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();           
            if (--x > 0) pq.push(x);            
            if (--y > 0) pq.push(y);            
        }
        if(pq.size()==0) cout << 0 << endl;
        else cout << pq.top() << endl;
    }
    return 0;
}