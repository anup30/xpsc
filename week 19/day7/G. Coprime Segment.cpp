// G. Coprime Segment, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int min_len = INT_MAX;
    unordered_map<ll, int> prev;
    
    for (int i = 0; i < n; ++i) {
        unordered_map<ll, int> current;
        long long ai = a[i];
        for (const auto& [g, s] : prev) {
            long long new_gcd = gcd(g, ai);
            auto it = current.find(new_gcd);
            if (it == current.end()) {
                current[new_gcd] = s;
            } 
			else {
                if (s > it->second) {
                    it->second = s;
                }
            }
        } 
        auto it = current.find(ai);
        if (it == current.end()) current[ai] = i;
        else if(i > it->second) it->second = i;
        auto it1 = current.find(1);
        if (it1 != current.end()){
            int len = i - it1->second + 1;
            min_len = min(min_len, len);
        }
        prev = move(current);
    }    
    if (min_len != INT_MAX) cout << min_len << endl;
    else cout << -1 << endl; 
}