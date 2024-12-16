// E - 3-palindrome, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n=1;
	cin >> n;
	string s= "aabb";
	string t="";
	int cnt = 0;
	while(cnt<n){
		for(int i=0; i<4; i++){
			t +=  s[i];
			cnt++;
			if(cnt==n) break;
		}
	}
	cout << t << endl;
}

// aabb
