// B. Multiplication and Sum (segment tree- lazy propagation), Accepted
// https://codeforces.com/edu/course/2/lesson/5/2/practice/contest/279653/problem/B
// lazy propagation tutorial: https://www.shafaetsplanet.com/?p=1591

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
const int imx = INT_MAX;
const int mod = 1e9+7;
int ar[mx];
pair<ll, ll> seg[4*mx];  // <sum, propagation>

void build(int id, int b, int e){
	seg[id].second=1;
	if (b == e){ // leaf node
		seg[id] = {ar[b], 1};
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id].first = (seg[2*id].first + seg[2*id+1].first)%mod;	
	seg[id].second=1;
}

void update(int id, int b, int e, int i, int j, ll x){ // multiply by x in range i , j
	if(i>e || j<b ) return;
	if(b>=i && e<=j){ // b,e is inside i,j
		seg[id].first = (x*seg[id].first)%mod; // sum
		seg[id].second = (x*seg[id].second)%mod; // propagation
		return;
	}
	int mid = (b+e)/2;
	update(2*id, b, mid, i, j, x);
	update(2*id+1, mid+1, e, i, j, x);
	seg[id].first = (((seg[2*id].first+seg[2*id+1].first)%mod)* seg[id].second)%mod;
}

ll query(int id, int b, int e, int i, int j, ll carry=1){
	if (i > e || j < b) return 0; // outside
	if (b >= i && e <= j) return (seg[id].first*carry)%mod;
	int mid = (b+e)/2;
	ll p1 = query(2*id, b, mid, i, j, (carry*seg[id].second)%mod); // propagation and carry
	ll p2 = query(2*id+1, mid+1, e, i, j, (carry*seg[id].second)%mod);
	return (p1+p2)%mod;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) ar[i]=1;
	build(1, 1, n);	// id, b, e	
	while(m--){
		int t;
		cin >> t;
		if(t==1){ // update
			int l, r, v;
			cin >> l >> r >> v;
			update(1, 1, n, l+1, r, v); // 0 to 1 based index
		}
		else{ // query
			int l, r;
			cin >> l >> r;			
			ll ans = query(1,1,n,l+1, r, (ll)1);
			cout << ans << endl;
		}
	}
}

/*
5 6
1 0 3 3
2 1 2
1 1 4 4
2 1 3
2 1 4
2 3 5

3
24
28
5
*/

/*
2 3
1 0 1 1000000
1 0 2 1000000
2 0 2

993000
*/