// C. Number of Equal, Wrong answer on test 13, claude, accepted
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);    
    for(int i = 0; i < n; i++) cin >> a[i];        
    for(int i = 0; i < m; i++) cin >> b[i];
    long long count = 0;
    int i = 0, j = 0;    
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            long long same_in_a = 1; // <--- long long
            while(i + 1 < n && a[i] == a[i + 1]) {
                same_in_a++;
                i++;
            }
            long long same_in_b = 1; // <--- long long
            while(j + 1 < m && b[j] == b[j + 1]) {
                same_in_b++;
                j++;
            }
            count += same_in_a * same_in_b;
            i++;
            j++;
        }
        else if(a[i] > b[j]) j++;        
        else i++;        
    }
    cout << count << endl;
    
    return 0;
}