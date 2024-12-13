// B. AND Reconstruction, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> b(n-1);
		for(int i=0; i<=n-2; i++) cin >> b[i];
		vector<int> a(n);
		a[0] = b[0];
		for(int i=1; i<=n-2; i++){
			a[i] = b[i]|b[i-1];
		}
		a[n-1] = b[n-2];
		bool pos=true;
		for(int i=0; i<=n-2; i++){
			if(b[i] != (a[i]&a[i+1])){
				pos=false;
				break;
			}
		}
		if(pos){
			for(int i=0; i<n; i++){
				cout << a[i] << " ";
			}
			cout << endl;			
		}
		else{
			cout << -1 << endl;
		}
	}
}

/*
4
2
1
3
2 0
4
1 2 3
5
3 5 4 2

5 3
3 2 1
-1
3 7 5 6 3
*/