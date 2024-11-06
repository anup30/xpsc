// week 2, Topicwise Problem 8, Accepted
// C1. Powering the Hero (easy version)
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		priority_queue<int> pq;
		ll sum=0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==0){
				if(!pq.empty()){
					sum += pq.top();
					pq.pop();
				}
			} 
			else{
				pq.push(v[i]);
			}
		}
		cout << sum << endl;
	}
	return 0;
}

