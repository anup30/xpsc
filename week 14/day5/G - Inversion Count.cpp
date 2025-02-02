// G - Inversion Count, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n;
		vector<int> v(n,0);
		for(int i=0; i<n; i++){
			cin >> v[i];			
		}	
		pbds<int> os;	//
		ll cnt=0;
		set<int> st;
		for(int i=n-1; i>=0; i--){
			cnt += os.order_of_key(v[i]); // no of items before v[i]
			os.insert(v[i]);
		}		
		cout << cnt << endl;
	}
}
