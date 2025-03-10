// B. Segment Tree for the Minimum, Accepted
// problem : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
const int imx = INT_MAX;
int ar[mx];
ll seg[4*mx];

void build(int id, int b, int e){
	if (b == e){ // leaf node
		seg[id] = ar[b];
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id] = min(seg[2*id], seg[2*id+1]); //
}

ll query(int id, int b, int e, int i, int j){
	if (i > e || j < b) return imx; //
	if (b >= i && e <= j) return seg[id];	
	int mid = (b + e) / 2;
	ll p1 = query(2*id, b, mid, i, j);
	ll p2 = query(2*id+1, mid + 1, e, i, j);
	return min(p1, p2); //
}

void update(int id, int b, int e, int i, int newval){
	if (i > e || i < b)
		return;
	if (b >= i && e <= i) {
		seg[id] = newval;
		return;
	}
	int left = 2*id;
	int right = 2*id+1;
	int mid = (b+e)/2;
	update(left, b, mid, i, newval);
	update(right, mid + 1, e, i, newval);
	seg[id] = min(seg[left], seg[right]);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> ar[i];
	build(1, 1, n);	// id, b, e	
	while(m--){
		int t;
		cin >> t;
		if(t==1){ // update
			int i, v;
			cin >> i >> v;
			update(1, 1, n, i+1, v); // i+1 becaue of 1 based index			
		}
		else{ // min query
			int l, r;
			cin >> l >> r;
			cout << query(1, 1, n, l+1, r) << endl;
		}
	}
}

/*
5 5
5 4 2 3 5
2 0 3
1 2 6
2 0 3
1 3 1
2 0 5

2
4
1
*/