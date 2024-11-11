// Max Sum Subarray of size K, Accepted
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int sz = arr.size();
        vector<long long> cum(sz, 0);
        long long sum=0;
        for(int i=0; i<sz; i++){
            sum+= arr[i];
            cum[i] = sum;
        }
        long long mx=0, cur=0;
        for(int i=0, j=k-1; j<=sz-1; i++, j++){
        	cur = cum[j] - cum[i] + arr[i];
        	if(cur>mx) mx=cur;
		}
		return mx;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends