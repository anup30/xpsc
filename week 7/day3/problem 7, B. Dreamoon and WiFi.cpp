// B. Dreamoon and WiFi, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s, t;
	cin >> s >> t;
	int n = s.size();
	ll pos =0, q=0, cum=0;  // '?'
	for(int i=0; i<n; i++){		
		if(s[i]=='+') pos++;
		else pos--;	
		if(t[i]=='?') q++;	
		if(t[i]=='+') cum++;
		else if(t[i]=='-') cum--;
	} 
	ll cnt=0;
	for(int i=0; i<(1<<q); i++){ // mask // 1 < 2^q
		ll c2=0;
		for(int j=0; j<q; j++){
			if((i>>j)&1) c2++;			
			else c2--;			
		}
		if(cum+c2==pos) cnt++;	
	}	
	double ans = 1.0*cnt/(1<<q);	
	cout << fixed << setprecision(12) << ans << endl;  // printf("%.12f\n", ans);
}
