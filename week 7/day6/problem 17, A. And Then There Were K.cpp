// A. And Then There Were K, Accepted
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
		int p = 1;
		while(true){
			if(n>=(1<<p)) p++;
			else break;
		}
		p--;
		cout << (1<<p)-1 << endl;			
	}
}
