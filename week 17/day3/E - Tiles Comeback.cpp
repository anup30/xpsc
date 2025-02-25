// E - Tiles Comeback, Accepted
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
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		int f=v[0], l=v[n-1];
		bool bf=false, bl=false;
		int c1=0, c2=0;
		for(int i=0; i<n; i++){
			if(!bf){
				if(v[i]==f){
					c1++;
					if(c1==k){
						bf=true;
						if(v[i]==l) bl=true;
					} 
				}				
			}
			else if(!bl){
				if(v[i]==l){
					c2++;
					if(c2==k){
						bl=true;
					} 
				}
			}
		}
		if(bf && bl) cout << "YES" << endl;
		else cout << "NO" << endl;		
	}
}
