//R - Ingenuity-2, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int N;
		cin >> N;
		string st;
		cin >> st;
		int x=0, y=0;
		for(int i=0; i<N; i++){
			if(st[i]=='N') y++;
			else if(st[i]=='S') y--;
			else if(st[i]=='E') x++;
			else if(st[i]=='W') x--;
		}
		if(abs(x)%2==1 || abs(y)%2==1){
			cout << "NO\n";
			continue;
		}
		else if(N==2 && x==0 && y==0){
			cout << "NO\n";
			continue;
		}
		int e=1, w=1, n=0, s=0;
		string ans = "", rh = "RH";
		for(int i=0; i<N; i++){
			if(st[i]=='N') ans+= rh[n], n=1-n;
			else if(st[i]=='S') ans+= rh[s], s=1-s;
			else if(st[i]=='E') ans+= rh[e], e=1-e;
			else if(st[i]=='W') ans+= rh[w], w=1-w;
		}
		cout << ans << endl;
	}
}
