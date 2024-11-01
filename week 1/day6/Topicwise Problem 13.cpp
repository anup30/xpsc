// Topicwise Problem 13, accepted
// C. Boxes Packing

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	// count occurence of max element
	int max = 1, cur =1;
	for(int i=1; i<n; i++){
		if(v[i]==v[i-1]) cur++;
		else cur=1;
		if(cur>max) max=cur;
	}
	cout << max << endl;
}
