// A. Addition to Segment (segment tree- lazy propagation), Accepted
// lazy propagation tutorial: https://www.shafaetsplanet.com/?p=1591
// problem: https://codeforces.com/edu/course/2/lesson/5/1/practice/contest/279634/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
const int imx = INT_MAX;
int ar[mx];
pair<ll, int> seg[4*mx];  // <sum, propagation>

void build(int id, int b, int e){
	if (b == e){ // leaf node
		seg[id] = {ar[b], 0};
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);		
	seg[id].first = seg[2*id].first + seg[2*id+1].first;	
	seg[id].second=0;
}

ll query(int id, int b, int e, int i, int j, int carry=0){
	if (i > e || j < b) return 0; 
	if (b >= i && e <= j) return seg[id].first+ carry*(e-b+1);
	int mid = (b + e) / 2;
	ll p1 = query(2*id, b, mid, i, j, carry+seg[id].second); // propagation added to carry
	ll p2 = query(2*id+1, mid+1, e, i, j, carry+seg[id].second);
	return p1+p2;
}

void update(int id, int b, int e, int i, int j, int x){ // increment by x in range i , j
	if(i>e || j<b ) return;
	if(b>=i && e<=j){ // b,e is inside i,j
		seg[id].first += ((e-b+1)*x); // sum
		seg[id].second += x; // propagation
		return;
	}
	int mid = (b+e)/2;
	update(2*id, b, mid, i, j, x);
	update(2*id+1, mid+1, e, i, j, x);
	seg[id].first = seg[2*id].first+seg[2*id+1].first+ (e-b+1)*seg[id].second;
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
			int l;
			cin >> l;			
			ll ans = query(1,1,n,l+1, l+1);
			cout << ans << endl;
		}
	}
}

/*
5 5
1 0 3 3
2 1
1 2 4 4
2 3
2 4

3
4
0
*/