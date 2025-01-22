// A - Mainak and Array, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		int a= v[n-1]-v[0], tmp;
		for(int i=1; i<n; i++){
			tmp = v[i]-v[0];
			a = max(a, tmp);
		}
		for(int i=n-2; i>0; i--){
			tmp = v[n-1]-v[i];
			a = max(a, tmp);
		}
		for(int i=0; i<n-1; i++){
			tmp = v[i]-v[i+1];
			a = max(a, tmp);
		}
		cout << a << endl;
	}
}
