// G - Beautiful Triple Pairs, Accepted
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
		map<pair<int, int>, int> ab;
		map<pair<int, int>, map<int, int>> ab2;
		map<pair<int, int>, int> ac;
		map<pair<int, int>, map<int, int>> ac2;
		map<pair<int, int>, int> bc;
		map<pair<int, int>, map<int, int>> bc2;
		ll ans=0;
		for(int i=0; i<n-2; i++){
			int a= v[i];
			int b= v[i+1];
			int c= v[i+2];
			if(ab.count({a,b})){
				int total = ab[{a,b}];
				int it = ab2[{a,b}][c];
				ans += total-it;
			}
			if(ac.count({a,c})){
				int total = ac[{a,c}];
				int it = ac2[{a,c}][b];
				ans += total-it;
			}
			if(bc.count({b,c})){
				int total = bc[{b,c}];
				int it = bc2[{b,c}][a];
				ans += total-it;
			}
			ab[{a,b}]++;
			ab2[{a,b}][c]++;
			bc[{b,c}]++;
			bc2[{b,c}][a]++;
			ac[{a,c}]++;
			ac2[{a,c}][b]++;
		}
		cout << ans << endl;
	}
}
