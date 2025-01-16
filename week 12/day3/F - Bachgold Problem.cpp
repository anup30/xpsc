// F - Bachgold Problem, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	if(n==2){
		cout << "1\n";
		cout << "2\n";		
	}
	else if(n==3){
		cout << "1\n";
		cout << "3\n";
	}
	else if(n%2==0){
		int k= n/2;
		cout << k << endl;
		while(k--) cout << "2 ";
		cout << endl;
	}
	else{
		int k= (n-3)/2;
		cout << k+1 << endl;
		while(k--) cout << "2 ";
		cout << 3 << endl;
	}
	
}
