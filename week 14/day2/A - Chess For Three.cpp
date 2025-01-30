// A - Chess For Three, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tc=1;
	cin >> tc;
	while (tc--){
		int a, b, c;
		cin >> a >> b >> c;
		priority_queue<int> pq;
		if(a>0) pq.push(a);
		if(b>0) pq.push(b);
		if(c>0) pq.push(c);
		int cnt=0;
		bool x=true;
		while(!pq.empty()){
			int t1 =pq.top(), t2=-1;
			pq.pop();
			if(!pq.empty()){
				t2=pq.top();
				pq.pop();
				if(t1>0 && t2>0){
					cnt++;
					t1--;
					t2--;
					if(t1>0) pq.push(t1);
					if(t2>0) pq.push(t2);
				}
			}
			else{
				if(t1%2==1){
					x=false;
				}
			}			
		}
		if(!x) cout << -1 << endl;
		else cout << cnt << endl;
	}	
}
