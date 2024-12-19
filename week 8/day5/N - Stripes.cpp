// N - Stripes, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		string r="RRRRRRRR";
		string s;
		bool b=false;
		for(int i=0; i<8; i++){
			cin >> s;
			if(s==r) b= true;
		}
		if(b) cout << "R\n";
		else cout << "B\n";
	}
}
