//B. Binary Colouring, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, end;
		cin >> n;
		vector<int> bits(32,0);
		for(int i=0; i<32; i++){
			bits[i]= ((n>>i)&1)==1?1:0;
		}
		ll m = log2(n) +2;
		vector<int> v(m);	
		for(int i=0; i<m; i++) v[i] = bits[i];
		for(int i=0; i<m-1; i++){
			int carry=1;
			if(v[i]==1 && v[i+1]==1){
				v[i]=-1;
				v[i+1]=0;
				for(int j=i+2; j<m; j++){
					v[j]=bits[j]+carry;
					if(v[j]>1) v[j]=0;
					else break;
				}
			}
		}
		if(v[m-1]==0) end=1;
		else end=0;
		cout << m-end << endl;
		for(int i=0; i<m-end; i++) cout << v[i] << " ";
		cout << endl;
	}
}