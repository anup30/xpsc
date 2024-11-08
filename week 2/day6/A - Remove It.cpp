// A - Remove It, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int n,x, a;
	cin >> n >> x;
	//vector<int> v(n);
	for(int i=0; i<n; i++){
		//cin >> v[i];
		cin >> a;
		if(a !=x) cout << a << " ";
	}
	
}