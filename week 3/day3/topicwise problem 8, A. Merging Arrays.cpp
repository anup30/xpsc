// A. Merging Arrays, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	vector<int> a(n);		
	vector<int> b(m);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<m; i++) cin >> b[i];
	vector<int> c;
	auto ia = a.begin();
	auto ib = b.begin();
	while(ia != a.end() || ib != b.end()){
		if(ia==a.end() && ib != b.end()){
			while(ib != b.end()){
				c.push_back(*ib);
				ib++;
			}
		}
		else if(ib==b.end() && ia != a.end()){
			while(ia != a.end()){
				c.push_back(*ia);
				ia++;
			}
		}
		else{
			if(*ia<=*ib){
				c.push_back(*ia);
				ia++;
			}
			else{
				c.push_back(*ib);
				ib++;
			}
		}		
	} 
	for(int i:c) cout << i << " ";
}

/*
6 7
1 6 9 13 18 18
2 3 8 13 15 21 25

1 2 3 6 8 9 13 13 15 18 18 21 25 
*/