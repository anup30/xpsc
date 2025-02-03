// L - Enemy is weak, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
///
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // less
template <typename T> using pbds_gr = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>; // greater
///

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		

	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	pbds<int> os; // for latter
	pbds_gr<int> oset; // for previous
	oset.insert(v[0]);
	for(int i=2; i<=n-1; i++){
		os.insert(v[i]);
	}
	ll cnt=0;
	for(int j=1; j<=n-2; j++){
		ll a = oset.order_of_key(v[j]);
		ll b = os.order_of_key(v[j]);
		cnt += a*b;
		oset.insert(v[j]);
		os.erase(v[j+1]);
	}
	cout << cnt << endl;
}

/*
4
10 8 3 1

4
*/
