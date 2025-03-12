// Curious Robin Hood (by segment tree), Accepted
// problem : https://lightoj.com/problem/curious-robin-hood
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
int ar[mx];
ll seg[mx * 4];

void build(int id, int b, int e){
	if (b == e){ // leaf node
		seg[id] = ar[b];
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	seg[id] = seg[2*id] + seg[2*id+1];
}

ll query(int id, int b, int e, int i, int j){
	if (i > e || j < b) return 0;		
	if (b >= i && e <= j) return seg[id];	
	int mid = (b + e) / 2;
	ll p1 = query(2*id, b, mid, i, j);
	ll p2 = query(2*id+1, mid + 1, e, i, j);
	return p1 + p2; 
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
	seg[id] = seg[left] + seg[right];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc=1;
	cin >> tc;
	for(int t=1; t<=tc; t++){
		cout << "Case " << t << ":" << endl;
		int n, q;
		cin >> n >> q;
		for(int i=1; i<=n; i++) cin >> ar[i];
		build(1, 1, n);	// id, b, e	
		while(q--){
			int choice;
			cin >> choice;
			if(choice==1){
				int i;
				cin >> i;
				int give = ar[i+1];
				update(1, 1, n, i+1, 0); 
				ar[i+1] = 0; ///
				cout << give <<endl;
			}
			else if(choice==2){
				int i, v;
				cin >> i >> v;
				int cur = ar[i+1];
				int newval = cur+v;
				update(1, 1, n, i+1, newval); 
				ar[i+1] = newval; ///
			}
			else if(choice==3){
				int i, j;
				cin >> i >> j;
				cout << query(1, 1, n, i+1, j+1) << endl;
			}			
		}
	}
}

/*
1
5 6
3 2 1 4 5
1 4
2 3 4
3 0 3
1 2
3 0 4
1 1

Case 1:
5
14
1
13
2
*/