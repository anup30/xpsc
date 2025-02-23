// A - We Got Everything Covered!, Accepted
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
		cin >> n >> k;
		for(int i=0; i<n; i++){
			for(int j=0; j<k; j++){
				cout << char(j+'a');
			}
		}		
		cout << endl;
	}
}
