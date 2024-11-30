// A - Special Characters, Accepted
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
		cin >>n;
		if(n&1) cout << "NO\n"; // n is odd
		else{
			cout << "YES\n";
			string s="";
			for(int i=0; i<n/2; i++){
				s += "AAB";
			}
			cout << s << endl;
		}
	}	
}