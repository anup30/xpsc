// Topicwise Problem 1, Accepted
// A. Sereja and Dima
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	int ar[n];
	for(int i=0; i<n; i++){
		cin >> ar[i];
	}
	int l=0, r= n-1;
	int s=0, d=0;
	bool st= true, dt = false;
	while(l<=r){
		if(n%2==1 && l==r){
			s += ar[l];
			//cout << "s, " << ar[l] << endl;
			break;
		}
		if(ar[l]>=ar[r]){
			if(st){
				s+= ar[l];
				st = !st;
				dt = !dt;
			}else{
				d += ar[l];
				st = !st;
				dt = !dt;
			}
			l++;
		}else{
			if(st){
				s+= ar[r];
				st = !st;
				dt = !dt;
			}else{
				d += ar[r];
				st = !st;
				dt = !dt;
			}
			r--;
		}		
	}
	cout << s << " " << d << '\n';
}