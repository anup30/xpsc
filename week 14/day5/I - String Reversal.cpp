// I - String Reversal, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
///
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //
///

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<char, queue<int>> mp;
	for(int i=0; i<n; i++){
		mp[s[i]].push(i);
	}
	vector<int> targets(n);
	int j=0;
	for(int i=n-1; i>=0; i--){
		targets[j++] = mp[s[i]].front();
		mp[s[i]].pop();
	}
	pbds<int> os; // ordered set
	ll cnt =0;
	for(int i=n-1; i>=0; i--){
		cnt += os.order_of_key(targets[i]);
		os.insert(targets[i]);
	}
	cout << cnt << endl;
}

/*
9
icpcsguru

30
*/