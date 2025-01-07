// D - Maximum Median, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		

	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int l=1, r=2e9, m=n/2;
	while(l<=r){
		int mid = l+(r-l)/2;
		ll k2=0;
		for(int i=m; i<n; i++){
			if(mid-v[i]>=0) k2 += (mid-v[i]);
		}
		if(k2<=k){
			l=mid+1; //
		}
		else{
			r=mid-1;
		}
	}
	cout << --l << endl;
}

/*
3 2
1 3 5

5



5 5
1 2 1 1 1

3



7 7
4 1 2 4 3 4 4

5
*/



/*
// D - Maximum Median
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		

	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	if(n==1){
		cout << n+k << endl;
		return 0;
	}
	int m= n/2;
	int im = n-1-m, cum= v[m];
	
	for(int i=1; i<=im; i++){
		int j= v[m+i] - v[m+i-1];
		if(j*i>=k){
			cum+= k/(i);
			cout << cum << endl;
			return 0;
		}
		else{
			cum +=j*i;
			k-=j*i;			
		}
		if(i==im){
			cum += k/(i+1);
			cout << cum << endl;
			return 0;
		}
		
	}
}
*/