// E - Jellyfish and Undertale, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		ll a, b, n, A;
		cin >> a >> b >> n;
		A = a-1;
		vector<ll> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		ll cum = b-1;
		for(int i=0; i<n; i++){
			if(v[i]<=A) cum += v[i];
			else cum += A;			
		}
		cum += 1;
		cout << cum << endl;
 	}	
}