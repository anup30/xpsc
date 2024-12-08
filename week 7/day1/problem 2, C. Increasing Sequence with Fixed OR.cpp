// C. Increasing Sequence with Fixed OR, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n=23;
		cin >> n;
		vector<ll> res;
		res.push_back(n);		
		int bits = 64;
		int j=-1;
		for(int k=0; k<bits; k++){
			if((n>>k)&1){ // if this bit is on
				ll p= (n ^ (1LL << k)); // toggle bit /// ---
				if(p>0)	res.push_back(p);	
				//if(p>n) k=bits;						
			}
		}	
		cout <<	res.size() << endl;	
		for(int i= res.size()-1; i>=0; i--){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}
