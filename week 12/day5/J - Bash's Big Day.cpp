// J - Bash's Big Day, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k, ans=1;
	cin >> n;
	map<int, int> mp;
	while(n--){
		cin >> k;
		int sr = sqrt(k);
		for(int i=2; i<=sr; i++){ // prime factorization
			if(k%i==0){
				mp[i]++;
				while(k%i==0) k /=i;				
			}
		}
		if(k>1) mp[k]++;
	}
	auto it= mp.begin();
	while(it!=mp.end()){
		ans = max(ans, it->second);
		it++;
	}
	cout << ans << endl;
}
