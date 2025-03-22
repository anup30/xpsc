// C. Assignment to Segment, Accepted
// segment tree, lazy propagation

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int mx =1e5+5;
ll seg[4*mx];
 
void update(int id, int b, int e, int i, int j, ll x){ // update x in range i , j
	if(i>e || j<b ) return;
	if(b>=i && e<=j){ // b,e is inside i,j
		seg[id] = x; //
		return;
	}
	if(seg[id] !=-1 ){ // push down
		seg[id*2]  = seg[id];	
		seg[id*2+1]  = seg[id];	
		seg[id] = -1;
	}
	int mid = (b+e)/2;
	update(2*id, b, mid, i, j, x);
	update(2*id+1, mid+1, e, i, j, x);	
}
 
ll query(int id, int b, int e, int i, int j){
	if (i > e || j < b) return 0; // outside
	if (b >= i && e <= j) return seg[id];
	if(seg[id] != -1) return seg[id];
	int mid = (b+e)/2;
	ll p1, p2;	
	p1 = query(2*id, b, mid, i, j);
	p2 = query(2*id+1, mid+1, e, i, j);
	return (p1 | p2);		
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int n, m;
	cin >> n >> m;
	for(int i=1; i<=4*n; i++) seg[i]=-1;
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
			ll ans = query(1,1,n,l+1, l+1);
			ans = max(0LL, ans);
			cout << ans << endl;
		}
	}
}