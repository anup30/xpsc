// H. Hamburgers, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s;
	cin >> s;
	ll na, nb, nc, a=0,b=0,c=0;
	cin >> na >> nb >> nc;
	ll pa, pb,pc;
	cin >> pa >> pb >> pc;
	ll ruble;
	cin >> ruble;
	
	ll len = s.size();
	for(int i=0; i<len; i++){
		if(s[i]=='B') a++;
		else if(s[i]=='S')b++;
		else c++;
	}
	
	ll l=0, r=1e13, ans=0;
	while(l<=r){
		ll mid = l+(r-l)/2;
		ll buy_a = max(0LL, mid*a - na);
		ll buy_b = max(0LL, mid*b - nb);
		ll buy_c = max(0LL, mid*c - nc);
		
		ll cost = buy_a*pa + buy_b*pb +buy_c*pc;
		if(cost<=ruble){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}		
	}
	cout << ans << endl;
}
