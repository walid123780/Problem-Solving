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
        std::vector<int> v(n);
        for(int i = 0 ; i < n ;i++){
           cin >> v[i];
        }
        int odd = 0 , even = 0 , f = 0;
        sort(v.begin(), v.end() , greater<int>());
        for(int i = 0; i < n; i++){
            if(v[i] % 2 != 0) odd += v[i];
            if(v[i] % 2 == 0) even += v[i];
        }
        if(even <= odd) cout << "NO" << endl;
        else cout << "YES" <<endl;
    }
}