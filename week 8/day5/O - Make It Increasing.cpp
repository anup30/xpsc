// O - Make It Increasing, Accepted
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
		int cnt=0;
		bool b= false;
		for(int i=n-2; i>=0; i--){
			while(v[i] >= v[i+1] && v[i]>0){
				v[i] /= 2;
				cnt++;								
			}
			if(v[i]==v[i+1] || (v[i]==0 && i>0)){
				cnt=-1;
				break;
			}
		}
		if(b) cout << "-1\n";
		else cout << cnt << endl;
	}
}
