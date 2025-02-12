// H - Sport Mafia, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k;
	cin >> n >> k;
	int i=1, cur = 1, sum=1, eat=0;
	while(true){
		int baki = n-i;
		if(sum-baki== k){
			eat= baki;
			break;
		}	
		i++;
		cur++;
		sum += cur; 
	}
	cout << eat << endl;
}
