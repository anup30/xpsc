// Longest Substring with K Uniques, Accepted
// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int n = s.size();        
		int left=0, right=0, count=0, mx=-1;
		map<char,int> mp;
		while(right<n){
			mp[s[right++]]++;
			if(mp.size()==k){
				count = right-left;
				mx = max(mx, count);
			}			
			while(mp.size()>k){				
				mp[s[left]]--;
				if(mp[s[left]]==0) mp.erase(s[left]);
				left++;
			}			
		}  
		return mx;      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends

/*
3
aabacbebebe 3
aaaa 2
aabaaab 2

7
-1
7
*/