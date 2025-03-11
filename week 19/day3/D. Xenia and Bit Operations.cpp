// D. Xenia and Bit Operations, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
vector<int> a;
vector<int> tree;

void build(int node, int b, int e, int level){
	if (b == e) {
		tree[node] = a[b];
		return;
	}
	int mid = (b+e)/2;
	build(2*node, b, mid, level-1);
	build(2*node+1, mid + 1, e, level-1);
	if (level % 2 == 1){
		tree[node] = tree[2*node] | tree[2*node+1];
	} else {
		tree[node] = tree[2*node] ^ tree[2*node+1];
	}
}

void update(int node, int b, int e, int idx, int val, int level){
	if (b == e) {
		tree[node] = val;
		a[idx] = val;
		return;
	} 
	int mid = (b+e)/2;
	if (b <= idx && idx <= mid) update(2*node, b, mid, idx, val, level-1);	
	else update(2*node+1, mid+1, e, idx, val, level-1);
	if (level % 2 == 1) tree[node] = tree[2*node] | tree[2*node+1];		
	else tree[node] = tree[2*node] ^ tree[2*node+1];	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	int size = pow(2, n);
	a.resize(size);
	tree.resize(4 * size);	
	for (int i = 0; i < size; ++i) {
		cin >> a[i];
	}	
	build(1, 0, size - 1, n);
	for (int i = 0; i < m; ++i) {
		int p, b;
		cin >> p >> b;
		update(1, 0, size - 1, p - 1, b, n);
		cout << tree[1] << endl;
	}
}