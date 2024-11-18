// F - Two Elevators, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b>> c;
		if(a< abs(b-c)+c){
			cout << 1 << endl;
		}
		else if(a > abs(b-c)+c){
			cout << 2 << endl;
		}
		else {
			cout << 3 << endl;
		}
	}
}