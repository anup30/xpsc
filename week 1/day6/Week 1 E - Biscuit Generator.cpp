// E - Biscuit Generator, accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b, t, buiscuits=0;
	cin >> a >> b >> t;
	for(int i=a; i<=t; i+=a){
		buiscuits += b;
	}
	cout << buiscuits << endl;
}
