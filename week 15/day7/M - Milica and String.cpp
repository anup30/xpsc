// M - Milica and String, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int b=0;
		for(int i=0; i<n; i++)
			if(s[i]=='B') b++;
		if(k==b){
			cout << 0 << endl;
		}
		else if(k>b){
			int dif = k-b, cnt=0;
			for(int i=0; i<n; i++){
				if(s[i]=='A') cnt++;
				if(cnt==dif){
					cout << 1 << endl;
					cout << i+1 << " " << "B" << endl;
					break;
				}
			}
		}
		else if(k<b){
			int dif = b-k, cnt=0;
			for(int i=0; i<n; i++){
				if(s[i]=='B') cnt++;
				if(cnt==dif){
					cout << 1 << endl;
					cout << i+1 << " " << "A" << endl;
					break;
				}
			}
		}		
	}
}
