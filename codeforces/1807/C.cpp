#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map < char  , int > mp;
        int f = 1;
        for(int i = 0; i < n; i++){
            if(mp[s[i]] == 0)mp[s[i]] = f;  
            if(f == 1) f = 2;
            else f = 1; 
        }
        std::vector<int> v(n);
        for(int i = 0; i < n; i++){
            v[i] = mp[s[i]];
        }
        f = 0;
        for(int i = 1; i < n; i++){
            if(v[i] == v[i-1]) f = 1;  
        }
        if(f) cout << "NO" <<endl;
        else cout <<  "YES" <<endl;
    }
}