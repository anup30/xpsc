// Week 1 A Counting, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a,b;
	cin >> a >> b;
	if(b>=a) cout << b-a+1 << '\n';
	else cout << 0 << '\n';	
}