// OR Permutation, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=n; i>=1; i--) cout << i << " ";
		cout << endl;
	}	
}