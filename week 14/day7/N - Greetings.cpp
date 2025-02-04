// N - Greetings, Accepted
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
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<pair<int, int>> pa(n);
		pbds<int> os;
		for(int i=0; i<n; i++){
			cin >> pa[i].first >> pa[i].second;		
			os.insert(pa[i].second);
		}
		sort(pa.begin(), pa.end()); 		
		ll cnt=0;
		for(int i=0; i<n; i++){
			cnt += os.order_of_key(pa[i].second);
			os.erase(pa[i].second);
		}
		cout << cnt << endl;
	}
}
