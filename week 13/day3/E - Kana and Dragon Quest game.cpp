// E - Kana and Dragon Quest game, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int x, n, m;
		cin >> x >> n >> m;
		bool b=false;
		while(n-- && x>20){
			x /= 2;
			x+= 10;			
		}
		x -= 10*m;
		if(x<=0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
