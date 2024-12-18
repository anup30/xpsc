// L - Two Friends, Accepted
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
		vector<int> p(n+1);
		for(int i=1; i<=n; i++) cin >> p[i];
		int cnt =3;
		for(int i=1; i<=n; i++){			
			if(i == p[p[i]]){
				cnt =2;
				break;
			}
		}
		cout << cnt << endl;
	}
}
