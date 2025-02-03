// J - Maximum Crossings (Easy Version), Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // less_equal for multiset

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n,0);	
		for(int i=0; i<n; i++){
			cin >> v[i];		
		}
		pbds<int> os;	// ordered multiset
		map<int, int> mp;
		ll cnt=0;
		for(int i=0; i<n; i++){
			int sm = os.order_of_key(v[i]);
			int sz = os.size();
			cnt += (sz-sm);
			os.insert(v[i]);
			mp[v[i]]++;		
		}	
		cout << cnt << endl;
	}
}

/*
4
7
4 1 4 6 7 7 5
2
2 1
1
1
3
2 2 2

6
1
0
3
*/