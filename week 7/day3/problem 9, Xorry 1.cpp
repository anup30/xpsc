// Xorry 1, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m, cnt=0, tmp;
		cin >> n;		
		m=n;
		while(m>1){
			m= m/2;
			cnt++;
		}
		tmp = (1<<cnt); // pow(2,cnt);
		cout << n-tmp << " " << tmp << endl;
	}
}
