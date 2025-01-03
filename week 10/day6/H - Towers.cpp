// H - Towers, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, cnt=0, big=1e9+1;
	cin >> n;
	vector<int> v(n);
	multiset<int> ms = {big};
	for(int i=0; i<n; i++) cin >> v[i];	
	if(n==1){
		cout << ++cnt << endl;
		return 0;
	}
	for(int i=0; i<n; i++){
		auto it = ms.upper_bound(v[i]);
		if(*it == big){
			ms.insert(v[i]);
			cnt++;
		} 
		else{			
			ms.erase(it);
			ms.insert(v[i]);
		}		
	}
	cout << cnt << endl;
	return 0;
}

/*
5
3 8 2 1 5

2
*/