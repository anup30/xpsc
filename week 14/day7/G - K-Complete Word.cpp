// G - K-Complete Word, Accepted
#include <bits/stdc++.h>
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int ans = 0;
		for (int i= 0; i<k/2; i++){
			map<char, int> mp;
			for (int j=i; j<n; j+=k){
				mp[s[j]]++;
				mp[s[n-1-j]]++;
			}
			int freq = 0;
			for (auto [ch, cnt] : mp){
				freq = max(freq, cnt);
			}
			ans+= (2*(n/k))-freq;
		}
		if(k%2==1){
			int mid = k/2;
			map<char, int> mp;
			for (int j=mid; j<n; j+=k){
				mp[s[j]]++;
			}
			int freq = 0;
			for (auto [ch, cnt] :mp){
				freq = max(freq, cnt);
			}
			ans+= (n/k)-freq;
		}
		cout << ans << endl;
	}
}