#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        s = '$' + s;
        int r = 0, g = 0, b = 0, f = 0, ans = 0;
        for(int i = 1; i <= n; i++) {
            f += 1;
            if(s[i] == 'B') {
                if (f % 3 == 0) r++;
                else if (f % 3 == 1) b++;
                else g++;
            }
            else if(s[i] == 'G') {
                if (f % 3 == 0) b++;
                else if (f % 3 == 1) g++;
                else r++;
            }
            else if(s[i] == 'R') {
                if (f % 3 == 0) g++;
                else if (f % 3 == 1) r++;
                else b++;
            }   
            // cout << r << g << b  << endl;
            if(f == k) {
                ans = max({ans , g, r, b});          
                f -= 1;
                if (s[i - k + 1] == 'B') b--;
                else if (s[i - k + 1] == 'R') r--;
                else  g--;
                swap(r , g);
                swap(r , b);
            }
        } 
        cout << k - ans << endl;
    }
    return 0;
}