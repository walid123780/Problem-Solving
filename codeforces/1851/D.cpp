#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve () {
    ll n;
    cin >> n;
    std::vector<ll> v(n - 1);
    map < ll , int > mp;
    for(int i = 0; i < n - 1; i++) {
        cin >> v[i];   
    }
    ll nth_sum = (n * (n + 1)) >> 1;
    long long sum = 0 , missing_sum = 0;
    for(int i = 1; i < n - 1; i++) {
        mp[v[i] - v[i - 1]]++;
        sum += v[i] - v[i - 1];
    }
    int missing_element = 0;
    for(int i = 1; i <= n; i++) {
        missing_element += (mp[i] == 0 ? 1 : 0);
        missing_sum += (mp[i] == 0 ? i : 0); 
        sum -= (mp[i] >= 1 ? i : 0);  
    }   
    if(v.back() == nth_sum) {
        if(missing_element == 2 && v[0] == missing_sum)  {
            cout << "YES" << endl;
        }
        else if(missing_element == 3) {
            if(!mp[v[0]] and v[0] >= 1 && v[0] <= n) {
                if(mp[sum] >= 1) {
                    cout << "YES" << endl;
                }
            }
            else cout << "NO" << endl; 
        }
        else {
         cout << "NO" << endl;
     }
 } 
 else if(v.back() != nth_sum) {
    if(missing_element == 2 and mp[v[0]] == 0 and v[0] >= 1 && v[0] <= n) {
        cout << "YES" << endl;
    }
    else {
       cout << "NO" << endl;
   }
}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}