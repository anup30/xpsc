// J - Collecting Numbers, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(pair<ll,int> a, pair<ll,int> b){
	return a.first<b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, tmp, cnt=1;
	cin >> n;
	vector<pair<ll, int>> v(n);
	for(int i=0; i<n; i++){
		cin >> tmp;
		v[i] = {tmp, i};
	}
	sort(v.begin(), v.end(), comp);	
	for(int i=1; i<n; i++){
		if(v[i].second < v[i-1].second) cnt++;
	}
	cout << cnt << endl;
}

/*
5
4 2 1 5 3

3
*/