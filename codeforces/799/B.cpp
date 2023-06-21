#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    std::vector<int> p(n) , a(n) , b(n);
    set <pair<int,int>> s[7];
    bool alive[n + 1];
    for(int i = 0; i < n; i++) {
    	cin >> p[i];
    }
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
    	cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        s[a[i]].insert({p[i] , i});
        s[b[i]].insert({p[i] , i});
        alive[i] = true;
    }
    int q;
    cin >> q;
    while(q--) {
    	int f;
    	cin >> f;
        int ans = -1;
        while(!s[f].empty()) {
            int x = (*(s[f].begin())).second;
            s[f].erase(s[f].begin());
            if(!alive[x]) {
                continue;
            }
            alive[x] = false;
            ans = p[x];
            break;
        }
        cout << ans << " ";
    }
    return 0;
}