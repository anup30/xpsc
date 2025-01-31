// D - Appending Mex, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	int mx=0, cur=0;
	bool b= false;
	for(int i=0; i<n; i++){
		if(v[i]>mx){
			cout << i+1 << endl;
			b=true;
			break;
		}
		else if(v[i]==mx){
			mx++;
		}
		else{
			//pass
		}
	}	
	if(!b) cout << -1 << endl;	
}
