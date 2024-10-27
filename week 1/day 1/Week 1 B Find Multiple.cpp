// Week 1 B Find Multiple, accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a,b,c;
	cin >> a >> b >> c;
	bool found = false;
	for(int i=c; i<=b; i+=c){
		if(i>=a && i<=b){
			cout << i << '\n';
			found =true;
			break;
		}
	}
	if(!found) cout << -1 << '\n';
}