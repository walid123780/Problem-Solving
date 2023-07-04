#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    std::vector<int> v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    int a , b;
    if(sum % n != 0) {
        a = sum / n;
        b = a + 1;
    }
    else {
        a = sum / n;
        b = a;
    }
    sort(v.begin(), v.end());
    // cout << a << " " << b << endl;
    ll ans = 0 , ans1 = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] < a) {
            ans += a - v[i];
        }
        else if(v[i] > b) {
            ans1 += v[i] - b;
        }
    }
    cout << max(ans , ans1) << endl;
    return 0;
}