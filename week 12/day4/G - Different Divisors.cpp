// G - Different Divisors, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	int num=1e6;
	vector<bool> prime(num + 1, true);
	prime[0]=prime[1]=false;
	for (int i = 2; i*i <= num;i++){
		if (prime[i]){
			for (int j= i+i; j<=num; j+=i){
				prime[j] = false;
			}
		}
	}
	vector<int> ar;
	for (int i=2; i <= num;i++){
		if(prime[i]) ar.push_back(i);
	}
	while (tc--){
		int d, a;
		cin >> d;
		auto it= lower_bound(ar.begin(),ar.end(), 1+d);
		int fa = *it;
		it= lower_bound(ar.begin(),ar.end(), fa+d);
		int se = *it;
		cout << fa*se << endl;
	}
}
