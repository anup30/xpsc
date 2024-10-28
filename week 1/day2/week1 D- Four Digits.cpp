// week1 D- Four Digits, accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s, res;
	cin >> s;
	int len = s.size();
	for(int i=1; i<=4-len; i++){
		res += "0";
	}
	res += s;
	cout << res << '\n';
}