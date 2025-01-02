// 10611 - The Playboy Chimp, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, q, a, s, t;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	cin >> q;
	while(q--){
		cin >> a;
		s=-1;
		t=-1;
		auto is = lower_bound(v.begin(), v.end(), a);
		if(is==v.end()){
			cout << v.back() << " X\n";
			continue; 
		}
		if(is!= v.end() && is !=v.begin()){
			is--;
			s = *is;
		} 
		auto it = upper_bound(v.begin(), v.end(), a);
		if(it==v.begin()){
			cout << "X " << v.front() << endl;
		}
		if(it != v.end()){
			t = *it;
		}
		if(s==-1 && t==-1) cout << "X X\n";
		else if(s==-1 && t!=-1) cout << "X " << t << endl;
		else if(s!=-1 && t==-1) cout << s << " X\n";
		else cout << s << " " << t << endl;
	}
}

/*
4
1 4 5 7
4
4 6 8 10

1 5
5 7
7 X
7 X
*/
