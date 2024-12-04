// D - Permutation Swap, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b){
	if (a == 0) return b;    
	return gcd(b % a, a);
}

int gcd_arr(vector<int> arr){
	int n= arr.size();
	int result = arr[1];
	for (int i = 2; i < n; i++){
		result = gcd(arr[i], result);
    	if(result == 1) return 1;
	}
	return result;
}

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n+1,0), a(n+1, -1);		
		for(int i=1; i<=n; i++){
			cin >> v[i];
			a[v[i]] = abs(v[i]-i);
		}
		int gcd = gcd_arr(a);	
		cout << gcd << endl;	
	}	
}