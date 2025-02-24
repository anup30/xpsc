// D - Sorting with Twos, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	auto is_power_of_2 = [](int i, int n){
		int k=1;		
		while(k<=n){
			if(i==k) return true;			
			k*=2;
		}
		return false;
	};
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		bool b=true;
		for(int i=0; i<n-1; i++){
			if(v[i]>v[i+1] && !is_power_of_2(i+1,n)){
				b=false;
				break;
			}
		}
		if(b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
