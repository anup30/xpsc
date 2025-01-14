// D - Shuffle Hashing, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		string p, h;
		cin >> p >> h;
		map<char,int> mp1, mp2;
		int n1 = p.size(), n2=h.size();
		if(n2<n1){
			cout << "NO\n";
			continue;
		}
		bool b=false;
		for(int i=0; i<n1; i++){
			mp1[p[i]]++;
		}
		for(int i=0, j=n1-1; j<n2; i++, j++){
			mp2.clear();
			for(int k=i; k<=j; k++){
				mp2[h[k]]++;
			}
			if(mp1==mp2){
				b=true;
				break;
			}
		}
		if(b) cout << "YES\n";
		else cout << "NO\n";	
	}
}
