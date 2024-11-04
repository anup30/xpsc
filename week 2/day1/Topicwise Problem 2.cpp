// week 2, Topicwise Problem 2, Accepted
// B. Polycarp Training
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int req = 1;
	for(int i=0; i<n; i++){
		if(v[i]>= req) req++;		
	}
	cout << req-1 << endl;
}