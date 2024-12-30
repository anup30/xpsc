// E - Subarray Divisibility, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n;
	cin >> n;	
	map<ll, int> mp;
	mp[0] = 1;
	ll cum=0, cnt=0, rem;
	vector<ll> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		cum += v[i];
		rem = (cum%n +n)%n; // prevent negative remainder
		cnt += mp[rem];
		mp[rem]++;
	} 
	cout << cnt << endl;
}