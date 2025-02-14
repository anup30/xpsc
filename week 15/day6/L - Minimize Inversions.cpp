// L - Minimize Inversions, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n;
		vector<pair<int,int>> a(n), b(n);
		for(int i=0; i<n; i++){
			cin >> k;
			a[i] = {k, i};
		}
		for(int i=0; i<n; i++){
			cin >> k;
			b[i] = {k, i};
		}
		sort(a.begin(), a.end());
		vector<int> c(n);
		for(int i=0; i<n; i++){
			int idx = a[i].second;			
			c[i] = b[idx].first;
		}	
		for(int i=0; i<n; i++) cout << a[i].first << " ";
		cout << endl;		
		for(int i=0; i<n; i++) cout << c[i] << " ";
		cout << endl;
	}
}
