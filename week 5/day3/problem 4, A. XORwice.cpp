// A. XORwice, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << int(a^b) << endl;
	}	
}