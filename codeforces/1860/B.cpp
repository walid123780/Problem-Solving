#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        long long n , k , a1, ak;
        cin >> n >> k >> a1 >> ak;

        long long cost = 0;
        if(n <= a1 or (n / k) <= ak and (n % k) <= a1) {
            cout << cost << endl;
        }
        else {
            long long f = n - (min (n / k , ak) * k);
            long long x = f - min(a1 , f);
            if(x % k == 0) {
                cost = x / k;
            }
            else if(min (a1 , f) >= (k - x % k)) {
                cost = (x / k) + 1;
            }
            else {
                cost = (x / k) + (x % k);
            }
            cout << cost << endl;
        }
    }
    return 0;
}