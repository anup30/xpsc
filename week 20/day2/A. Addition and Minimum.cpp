// A. Addition and Minimum (segment tree- lazy propagation), Accepted
// https://codeforces.com/edu/course/2/lesson/5/2/practice/contest/279653/problem/A
// lazy propagation tutorial: https://www.shafaetsplanet.com/?p=1591

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
const int imx = INT_MAX;
int ar[mx];
pair<ll, int> seg[4*mx];  // <sum==min here, propagation>

void build(int id, int b, int e){ // build not needed as array is 0 here.
	if (b == e){ // leaf node
		seg[id] = {ar[b], 0};
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id].first = min(seg[2*id].first , seg[2*id+1].first);
	seg[id].second=0;
}

void update(int id, int b, int e, int i, int j, int x){ // increment by x in range i , j
	if(i>e || j<b ) return;
	if(b>=i && e<=j){ // b,e is inside i,j
		seg[id].first += (ll)x; // sum
		seg[id].second += x; // propagation
		return;
	}
	int mid = (b+e)/2;
	update(2*id, b, mid, i, j, x);
	update(2*id+1, mid+1, e, i, j, x);
	seg[id].first = min(seg[2*id].first, seg[2*id+1].first)+ (ll)seg[id].second;
}

ll query(int id, int b, int e, int i, int j, int carry=0){
	if (i > e || j < b) return imx; // outside
	if (b >= i && e <= j) return seg[id].first+ (ll)carry;
	int mid = (b + e) / 2;
	ll p1 = query(2*id, b, mid, i, j, carry+seg[id].second); // propagation added to carry
	ll p2 = query(2*id+1, mid+1, e, i, j, carry+seg[id].second);
	return min(p1, p2);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) ar[i]=0;
	//build(1, 1, n);	// id, b, e	 // not needed
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
			ll ans = query(1,1,n,l+1, r, 0);
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
7
4
0
*/