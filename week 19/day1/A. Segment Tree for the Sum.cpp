// A. Segment Tree for the Sum, Accepted
// problem : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
int ar[mx];
ll seg[mx * 4];

void build(int id, int b, int e){
	if (b == e){ // leaf id
		seg[id] = ar[b];
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id] = seg[2*id] + seg[2*id+1];
}

ll query(int id, int b, int e, int i, int j){
	if (i > e || j < b)
		return 0; 
	if (b >= i && e <= j)
		return seg[id]; 
	int left = id * 2; 
	int right = id * 2 + 1;
	int mid = (b + e) / 2;
	ll p1 = query(left, b, mid, i, j);
	ll p2 = query(right, mid + 1, e, i, j);
	return p1 + p2; 
}

void update(int id, int b, int e, int i, int newval){
	if (i > e || i < b)
		return;
	if (b >= i && e <= i) {
		seg[id] = newval;
		return;
	}
	int left = id * 2;
	int right = id * 2 + 1;
	int mid = (b + e) / 2;
	update(left, b, mid, i, newval);
	update(right, mid + 1, e, i, newval);
	seg[id] = seg[left] + seg[right];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> ar[i];
	build(1, 1, n);	// id, b, e
	/*
	update(1, 1, n, 2, 0); // id, b, e, i, newval
	cout << query(1, 1, n, 1, 3) << endl; // id, b, e, i, j
	update(1, 1, n, 2, 2);
	cout << query(1, 1, n, 2, 2) << endl;
	*/
	while(m--){
		int t;
		cin >> t;
		if(t==1){ // update
			int i, v;
			cin >> i >> v;
			update(1, 1, n, i+1, v); // i+1 becaue of 1 based index			
		}
		else{ // range sum query
			int l, r;
			cin >> l >> r;
			cout << query(1, 1, n, l+1, r) << endl;
		}
	}
}

/*
6
1 3 5 7 9 11

*/