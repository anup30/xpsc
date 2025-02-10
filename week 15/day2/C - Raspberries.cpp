// C - Raspberries, Accepted
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
		int e=0, o=0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]%2==0) e++;
			else o++;
		} 
		if(k==2){
			if(e>0){
				cout << 0 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}
		else if(k==4){
			int mn=4, cur=0;
			if(e>1) mn=0;
			else if(e==1) mn=1;
			else mn=2;
			for(int i=0; i<n; i++){
				cur = 4-(v[i]%4);
				mn = min(mn, cur);
				if(v[i]%4==0) mn=0;
			}
			cout << mn << endl;
		}
		else if(k==3){
			int mn=3, cur=0;
			for(int i=0; i<n; i++){
				cur = 3-(v[i]%3);
				mn = min(mn, cur);
				if(v[i]%3==0) mn=0;
			}
			cout << mn << endl;
		}
		else if(k==5){
			int mn=5, cur=0;
			for(int i=0; i<n; i++){
				cur = 5-(v[i]%5);			
				mn = min(mn, cur);
				if(v[i]%5==0) mn=0;
			}
			cout << mn << endl;
		}
	}
}
