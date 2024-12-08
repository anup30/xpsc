// B. Petr and a Combination Lock, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, sum;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];	
	bool ans = false;
	for(int i=0; i<pow(2,n); i++){  // bitmasks // pow(2,n) == 2^n == 1<<n
		sum=0;
		for(int j=0; j<n; j++){
			if((i>>j) & 1) sum += v[j];			
			else sum -= v[j];			
		}
		if(sum%360==0){
			ans =true;
			break;
		}
	}
	if(ans) cout << "YES\n";
	else cout << "NO\n";
}
