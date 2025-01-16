// E - Almost Prime, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n=1;
	cin >> n;
	int num=3000;
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
	int ans=0;
	for (int i=4; i<=n; i++){
		int cnt=0;
		for(int j=0; j<ar.size() && ar[j]< i; j++){
			if(i%ar[j]==0){				
				cnt+=1;
			}
		}
		if(cnt==2){
			ans++;		
		} 
	}
	cout << ans << endl;
}