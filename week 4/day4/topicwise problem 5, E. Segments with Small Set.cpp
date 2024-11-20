// E. Segments with Small Set, Accepted
// count good segments where, unique elements <= k 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<ll, ll> mp;
    ll left = 0, right = 0, count=0;

    while (right < n){        
        mp[v[right++]]++;        
        while (mp.size() > k){
            mp[v[left]]--;
            if (mp[v[left]] == 0) {
                mp.erase(v[left]);
            }
            left++;
        }        
        count += (right - left);
    }
    cout << count << endl;
}

/*
7 3
2 6 4 3 6 8 3

20
*/

//6436, 3683