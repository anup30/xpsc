// B - Minor Change, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	string a,b;
	cin >> a >>b;
	int len = a.size(), cnt=0;
	for(int i=0; i<len; i++){
		if(a[i] != b[i]) cnt++;
	}
	cout << cnt << endl;
}