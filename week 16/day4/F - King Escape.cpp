// F - King Escape, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	int ax,ay, bx,by, cx,cy;
	cin >> ax >> ay;
	cin >> bx >> by;
	cin >> cx >> cy;	
	
	if(bx<ax) bx=-1;
	else bx=1;
	if(cx<ax) cx=-1;
	else cx=1;
	
	if(by<ay) by=-1;
	else by =1;
	if(cy<ay) cy=-1;
	else cy=1;
	
	if(bx==cx && by==cy) cout << "YES" << endl;
	else cout << "NO" << endl;	
}
