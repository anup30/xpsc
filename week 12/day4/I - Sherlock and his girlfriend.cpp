// I - Sherlock and his girlfriend, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n=1;
	cin >> n;
	int num=1e5+5;
	vector<bool> prime(num + 1, true);
	prime[0]=prime[1]=false;
	for (int i = 2; i*i <= num;i++) {
		if (prime[i]){
			for (int j= i+i; j<=num; j+=i){
				prime[j] = false;
			}
		}
	}
	if(n==1){
		cout << "1\n";
		cout << "1\n";
	}
	else if(n==2){
		cout << "1\n";
		cout << "1 1\n";
	}
	else if(n==3){
		cout << "2\n";
		cout << "1 1 2\n";
	}
	else if(n>3){
		cout << 2 << endl;
		for(int i=1; i<=n; i++){
			if(prime[i+1]) cout << "1 ";
			else cout << "2 ";
		}
		cout << endl;
	}
}
