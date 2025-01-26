// J - Alice and the Cake, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n;
		cin >> n;
		vector<ll> v(n);
		map<ll, ll> ini;
		ll sum = 0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			sum += v[i];
			ini[v[i]]++;
		} 
		priority_queue<ll> pq;
		pq.push(sum);
		bool b=true;
		while(!pq.empty() && b){
			ll x= pq.top();
			pq.pop();
			if(ini.count(x) >0){
				ini[x]--;
				if(ini[x]==0){
					ini.erase(x);
				}
			}
			else if(x>1LL){
				ll a = x/2;
				ll b = x-a;
				pq.push(a);
				pq.push(b);
			}
			else{
				b=false;		
			}
			if(pq.size()>n) b=false;
		}
		if(b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
