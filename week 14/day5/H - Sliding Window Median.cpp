// sliding window median, Accepted
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int &x : v) cin >> x;	
	multiset<int> lo, hi;
	auto balance = [&]() {
		while (lo.size() > hi.size() + 1) {
			hi.insert(*lo.rbegin());
			lo.erase(--lo.end()); // lo.erase(--lo.end());
		}
		if (hi.size() > lo.size()) {
			lo.insert(*hi.begin());
			hi.erase(hi.begin());
		}
	};	
	for (int i = 0; i < k; i++) lo.insert(v[i]);
	balance();	
	cout << *lo.rbegin() << " ";	
	for (int i = k; i < n; i++) {
		int out = v[i - k], in = v[i];	
		if (lo.find(out) != lo.end()) lo.erase(lo.find(out));
		else hi.erase(hi.find(out));	
		lo.insert(in);
		hi.insert(*lo.rbegin());
		lo.erase(--lo.end()); //	
		balance();
		cout << *lo.rbegin() << " ";
	}	
	cout << endl;
	return 0;
}
 
/*
8 3
2 4 3 5 8 1 2 1
 
3 4 5 5 2 1
*/
