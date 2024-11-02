// G - How many, Accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int s, t, count =0;
	cin >> s >> t;
	for(int i=0; i<=s; i++){
		for(int j=0; j<= s-i; j++){
			for(int k=0; k<= s-i-j; k++){
				if(i*j*k <= t) count++;
			}
		}
	}
	cout << count << endl;
}
