// A - Little Girl and Maximum Sum, Accepted
// difference array technique

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, q, l, r;
	cin >> n >> q;
	vector<ll> v(n);
	vector<pair<ll, ll>> pa(n+1,{0,0});
	for(int i=0; i<n; i++){
		cin >> v[i];
		pa[i].second= i;
	}	
	while (q--){
		cin >> l >> r;
		pa[l-1].first++;
		pa[r].first--;
	}
	for(int i=1; i<=n; i++){
		pa[i].first += pa[i-1].first;
	}
	pa.pop_back();	
	sort(pa.rbegin(), pa.rend()); //
	sort(v.rbegin(), v.rend());
	ll sum=0;
	for(int i=0; i<n; i++){
		sum += (pa[i].first) * v[i];
	}
	cout << sum << endl;
}

/*
3 3
5 3 2
1 2
2 3
1 3

25

5 3
5 2 4 1 3
1 5
2 3
2 3

33
*/