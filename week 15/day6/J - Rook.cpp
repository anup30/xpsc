// J - Rook, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		char a, b;
		cin >> a >> b;		
		for(int i=1; i<=8; i++){
			if(i != (b-48)){
				cout << a << i << endl;
			}			
		}
		for(char j='a'; j<='h'; j++){
			if(j != a){
				cout << j << b << endl;
			}
		}
	}
}
