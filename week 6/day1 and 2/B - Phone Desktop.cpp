// B - Phone Desktop, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;			
		int ys = y/2;
		int xsy = 7*ys;
		if(y&1){
			ys += 1;
			xsy += 11;
		}
		if(x <= xsy){
			cout << ys << endl;
			continue;
		}
		int rem = x-xsy;
		cout << ys + ceil(rem/15.0) << endl;
	}
}
