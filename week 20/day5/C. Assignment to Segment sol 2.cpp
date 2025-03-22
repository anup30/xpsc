// C. Assignment to Segment, Accepted
// segment tree, lazy propagation

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =1e5+1;
const int imx = INT_MAX;
int ar[mx];
pair<ll, ll> seg[4*mx];  // <sum== " ", propagation>

void build(int id, int b, int e){ //
	if (b == e){ // leaf node
		seg[id] = {0, -1}; // {ar[b], -1}
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id].first = 0;
	seg[id].second =-1;
}

void update(int id, int b, int e, int i, int j, ll x){ // update x in range i , j
	if(i>e || j<b ) return;
	if(b>=i && e<=j){ // b,e is inside i,j
		seg[id].first = x; // sum
		seg[id].second = x; // propagation
		return;
	}
	if(seg[id].second !=-1 ){ // push down
		seg[id*2].first  = seg[id].second;
		seg[id*2].second = seg[id].second;
		seg[id*2+1].first  = seg[id].second;
		seg[id*2+1].second = seg[id].second;
		seg[id].second = -1;
	}
	int mid = (b+e)/2;
	update(2*id, b, mid, i, j, x);
	update(2*id+1, mid+1, e, i, j, x);	
}

ll query(int id, int b, int e, int i, int j, ll carry=-1){
	if (i > e || j < b) return 0; // outside
	if (b >= i && e <= j) return carry!=-1? carry: seg[id].second;
	int mid = (b+e)/2;
	ll p1, p2;
	if(carry != -1) return carry;
	else{
		p1 = query(2*id, b, mid, i, j, seg[id].second);
		p2 = query(2*id+1, mid+1, e, i, j, seg[id].second);
		return (p1 | p2);
	}	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) ar[i]=0;
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
			cin >> l;			
			ll ans = query(1,1,n,l+1, l+1, -1);
			ans = max(0LL, ans);
			cout << ans << endl;
		}
	}
}