// M - Turtle Tenacity, Continual Mods, Accepted
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
		sort(v.begin(), v.end());
		if(v[0] != v[1]){
			cout << "YES\n";
			continue;
		}
		bool found=false;
		for(int i=1; i<n; i++){
			if(v[i]%v[0] >0){
				found=true;
				break;
			}
		}
		if(found) cout << "YES\n";
		else cout << "NO\n";
	}
}
