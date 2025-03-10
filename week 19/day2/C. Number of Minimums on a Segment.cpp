// C. Number of Minimums on a Segment, Accepted
// problem : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx =100005;
const int imx = INT_MAX;
int ar[mx];
pair<ll, int> seg[4*mx];

void build(int id, int b, int e){
	if (b == e){ // leaf node
		seg[id] = {ar[b], 1}; ///
		return;
	}	
	int mid = (b + e)/2;
	build(2*id, b, mid);
	build(2*id+1, mid + 1, e);
	//seg[id] = min(seg[2*id], seg[2*id+1]); //
	if(seg[2*id].first == seg[2*id+1].first){
		seg[id].first = seg[2*id].first;
		seg[id].second = seg[2*id].second + seg[2*id+1].second;
	}
	else if(seg[2*id].first < seg[2*id+1].first){
		seg[id] = seg[2*id];
	}
	else if(seg[2*id].first > seg[2*id+1].first){
		seg[id] = seg[2*id+1];
	}	
}

pair<ll, int> query(int id, int b, int e, int i, int j){
	if (i > e || j < b) return {imx, 0}; ///
	if (b >= i && e <= j) return seg[id];	
	int mid = (b + e) / 2;
	pair<ll, int> p1 = query(2*id, b, mid, i, j);
	pair<ll, int> p2 = query(2*id+1, mid + 1, e, i, j);
	//return min(p1, p2); //
	if(p1.first == p2.first) return {p1.first, p1.second+p2.second};	
	else if(p1.first < p2.first) return p1;	
	else return p2;
}

void update(int id, int b, int e, int i, int newval){
	if (i>e || i<b) return;		
	if (b==e && b==i) {
		seg[id] = {newval, 1};
		return;
	}
	int left = 2*id;
	int right = 2*id+1;
	int mid = (b+e)/2;
	update(left, b, mid, i, newval);
	update(right, mid + 1, e, i, newval);
	//seg[id] = min(seg[left], seg[right]);
	if(seg[left].first == seg[right].first){
		seg[id].first = seg[left].first;
		seg[id].second = seg[left].second + seg[right].second;
	}
	else if(seg[left].first < seg[right].first){
		seg[id] = seg[left];
	}
	else if(seg[left].first > seg[right].first){
		seg[id] = seg[right];
	}
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
		else{ // query
			int l, r;
			cin >> l >> r;
			pair<ll, int> ans = query(1, 1, n, l+1, r);
			cout << ans.first << " " << ans.second << endl;
		}
	}
}

/*
5 5
3 4 3 5 2
2 0 3
1 1 2
2 0 3
1 0 2
2 0 5

3 2
2 1
2 3
*/