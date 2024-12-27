// A. Nastia and Nearly Good Numbers, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll a, b;
		cin >> a >> b;
		if(b==1){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		cout << a << " " << a*b << " " << a*(b+1) << endl;
	}
}
