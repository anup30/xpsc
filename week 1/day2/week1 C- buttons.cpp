// week1 C-buttons, accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a,b,c,d,e;
	cin >> a >> b;
	c = max(a,b);	
	d = 2*c-1;
	e = a+b;
	cout << max(d,e) << '\n';
}