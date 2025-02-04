// M - Pair of Topics, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
///
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //  less, greater, less_equal
///

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		
	
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	pbds<pair<int,int>> os;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++){
		cin >> b[i];
		os.insert({b[i]-a[i], i});		
	}	
	ll cnt =0;
	for(int i=0; i<n; i++){
		int dif = a[i]-b[i];
		os.erase({b[i]-a[i], i});		
		cnt += os.order_of_key({dif, i});
		//cout << "i, dif, cnt + " << i << " " << dif << " " << os.order_of_key({dif, i}) << endl;		
	}
	cout << cnt << endl;	
}

/*
5
4 8 2 6 2
4 5 4 1 3

7
*/