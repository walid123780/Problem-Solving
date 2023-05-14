#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
        int frq[26] = {0};
    	for(int i = 0; i < s.size(); i++) {
            frq[s[i] - 'a']++;
        }
        int odd = 0 , even = 0 , f = 0;  
        for(int i = 0; i < 26; i++) {
            if(frq[i] == 0) continue;
            else if(frq[i] % 2) f =  frq[i] , odd++;
            else even++;
        }
        if(odd == 1 || !odd) {
            if(even > 1) cout << "YES" << endl;
            else if(f > 1 && even > 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}