// Topicwise Problem 3, Accepted
// A. Indian Summer
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, count =0;
	cin >> n;
	string a,b;
	set<pair<string, string>> sp;
	while(n--){
		cin >> a >> b;
		sp.insert({a,b});
	}
	cout << sp.size()<< '\n';
}