// D. 1D Eraser, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
		int n, k, c=0;
		cin >> n >> k;
		string s;
		cin >> s;
		for(int i=0; i<=n-1; i++){
			if(s[i]=='B'){
				c++;
				i+= k-1;
			}
		}
		cout << c << endl;
	}	
}

/*
8
6 3
WBWWWB
7 3
WWBWBWW
5 4
BWBWB
5 5
BBBBB
8 2
BWBWBBBB
10 2
WBBWBBWBBW
4 1
BBBB
3 2
WWW
*/