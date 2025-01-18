// L - Turtle Fingers, Count the Values of k, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int a, b, l;		
		cin >> a >> b >> l;
		set<int> st;
		for(int i=0; i<21; i++){
			int a1 = pow(a,i);
			if(a1>l) break;
			if(l%a1==0){
				for(int j=0; j<21; j++){
					int b1 = pow(b,j);
					if(b1>(l/a1)) break;
					if((l/a1)%b1==0){						
						st.insert(l/(a1*b1));				
					} 
				}
			}			
		}
		cout << st.size() << endl;
	}
}

/*
11
2 5 20
2 5 21
4 6 48
2 3 72
3 5 75
2 2 1024
3 7 83349
100 100 1000000
7 3 2
2 6 6
17 3 632043

6
1
5
12
6
11
24
4
1
3
24
*/
