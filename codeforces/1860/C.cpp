#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
        cin >> n;
        int ans = 0;
        int mn = n + 1 , mnwin = n + 1;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(mn < x and x < mnwin) {
                ans += 1;
                mnwin = x;
            }   
            mn = min(mn , x);
        }
        cout << ans << endl;
    }
    return 0;
}