#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n+1] = {0};
    int mn = INT_MAX, mx = INT_MIN;
    ll sum = 0;
    for(int i = 0; i < n ; i +=1) {
      cin>>a[i];
      if(i == 0 or i == n - 1) continue;
      mx = max(a[i], mx);
      mn = min(a[i], mn);
      if(a[i] % 2) a[i] = a[i] + 1;
      sum += a[i] / 2;
    }
    if(mx == mn && mx == 1 or (n == 3 && mx % 2 == 1)) {
      cout<<"-1\n";
      continue;
    }
    cout<<sum<<endl;      
  } 
  return 0;
}