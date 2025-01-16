// D - Composite Coloring, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	int num;	
	num=1e3;
	vector<bool> prime(num + 1, true);
	prime[0]=prime[1]=false;
	for (int i = 2; i*i <= num;i++) {
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
		int n;
		cin >> n;
		vector<int> v(n), sol(n,0);
		for(int i=0; i<n; i++) cin >> v[i];
		map<int,int> mp;	
		
		vector<bool> ar2(ar.size()+1, false);
		for(int i=0; i<n; i++){
			for(int j=0; j<ar.size(); j++){
				if(v[i]% ar[j]==0){
					mp[ar[j]]++;
					ar2[j+1]=true;
					sol[i] = j+1;	
					break;
				}
			}			
		}		
		vector<int> cor; // correction
		for(int i=1; i<ar2.size(); i++){
			if(!ar2[i]) cor.push_back(i);
		}
		int sz= mp.size();
		cout << sz << endl;
		for(int i=0; i<sol.size(); i++){
			auto it = lower_bound(cor.begin(), cor.end(), sol[i]);
			cout << sol[i] - (it-cor.begin()) << " ";
		}		
		cout << endl;
	}
}

/*
3
3
6 10 15
2
4 9
23
437 519 865 808 909 391 194 291 237 395 323 365 511 497 781 737 871 559 731 697 779 841 961

1
1 1 1
2
2 1
11
4 7 8 10 7 3 10 7 7 8 3 1 1 5 5 9 2 2 3 3 4 11 6
*/