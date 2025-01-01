// B. Interesting drink, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, q;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	cin >> q;
	while(q--){
		int a;
		cin >> a;
		auto it = upper_bound(v.begin(), v.end(), a);
		cout << it - v.begin() << endl;
	}	
}