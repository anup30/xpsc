// Xorry 2, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, tp=1, cnt=0, ex=0, y=0, ans=1;
		cin >> n;		
		while(1){
			if(2*tp<=n){
				tp *=2;
				cnt++;
			} 
			else break;
		} 
		bool b= false;
		for(int i=cnt-1; i>=0; i--){
			if((n&1<<i)){
				b = b|(1<<i);
				b=true;
			}
			else{
				if(b) ans*=2;
			}
		}
		cout << ans << endl;
	}
}

// 6 = 110