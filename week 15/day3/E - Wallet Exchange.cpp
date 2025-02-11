// E - Wallet Exchange, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int a, b;
		cin >> a >> b;
		if((a+b)%2==1){
			cout << "Alice" << endl;
		}
		else{
			cout << "Bob" << endl;
		}
	}
}
