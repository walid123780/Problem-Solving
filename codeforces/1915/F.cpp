#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct myComp {
    bool operator()(const pair<int, int> a, const pair<int, int> b) {
        if (a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
    }
};
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // o_set<int> se;
  // se.insert(4);
  // se.insert(2);
  // se.insert(5);
  // // sorted set se = [2, 4, 5]
  // cout << se.order_of_key(5) << '\n'; // number of elements < 5
  // cout << se.order_of_key(6) << '\n'; // number of elements < 6
  // cout << (*se.find_by_order(1)) << '\n'; // if you imagine this as a 0-indexed vector, what is se[1]?
  int t = 1;
    cin >> t;
    while(t--) {
     int n;
     cin >> n;
     o_set<int> se;
     std::vector<pair<int ,int>> a(n);
     for(int i = 0; i < n; i++) {
       cin >> a[i].first >> a[i].second;
       se.insert(a[i].second);
     }
     ll ans = 0;
     sort(a.begin(), a.end());
      for(int i = 0; i < n; i++) {
      int less_element = se.order_of_key(a[i].second);
      se.erase(a[i].second);
      ans += less_element; 
     }
     cout << ans << endl;
   }
  return 0;
}