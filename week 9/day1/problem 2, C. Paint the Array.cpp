// C. Paint the Array, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll gcd(ll a, ll b){
	if (a == 0) return b;    
	return gcd(b % a, a);
}

ll gcd_array(vector<ll> &arr, int n){
	ll result = arr[0];
	for (int i = 1; i < n; i++){
		result = gcd(arr[i], result);
    	if(result == 1) return 1;
	}
	return result;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<ll> even, odd;
		ll x;
		for(int i=0; i<n; i++){
			cin >> x;
			if(i%2==0) even.push_back(x);
			else odd.push_back(x);
		}
		ll egcd = gcd_array(even, even.size());
		ll ogcd = gcd_array(odd, odd.size());
		bool teven = true, todd = true;
		for(int i=0; i<even.size(); i++){
			if(even[i]% ogcd==0){
				todd= false;
				break;
			}
		}	
		for(int i=0; i<odd.size(); i++){
			if(odd[i]% egcd==0){
				teven = false;
				break;
			}
		}	
		if(teven) cout << egcd << endl;
		else if(todd) cout << ogcd << endl;
		else cout << 0 << endl;
	}
}

