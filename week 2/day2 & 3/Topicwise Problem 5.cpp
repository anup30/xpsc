// week 2, Topicwise Problem 5
// C. Berpizza
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, customerNo = 1;
   cin >> n;
   set<pair<int, int>> s;
   multiset<pair<int, int>> ml;
   vector<int> ans;
   for (int i = 1;i <= n;i++) {
      int typ;
      cin >> typ;
      if (typ == 1) {
         int money;
         cin >> money;
         s.insert({ customerNo,money });
         ml.insert({ money,-customerNo }); // - for, lower indexed customer in bottom if money equal
         customerNo++;
      }
      else if (typ == 2) {
         int pos = s.begin()->first, money = s.begin()->second;
         ans.push_back(pos);
         s.erase(s.begin());
         ml.erase({ money,-pos });
      }
      else {
         int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
         ans.push_back(pos);
         ml.erase(--ml.end());
         s.erase({ pos,money });
      }
   }

   for (auto value : ans) {
      cout << value << " ";
   }
   cout << '\n';

   return 0;
}