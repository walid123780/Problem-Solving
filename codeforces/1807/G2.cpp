#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
     int n; 
     cin >>n;
     std::vector<int> v(n);
     for(int i = 0; i < n; i++){
        cin >> v[i];   
    }
    sort(v.begin(), v.end());
    long long j = 1 , f = 0;
    if(1 < v[0]) f = 1;
    for(int i = 1; i < n; i++){
        if(j < v[i]) {f = 1; break;}
        j += v[i]; 
    }
    if(f) cout << "NO" <<endl;
    else cout << "YES" << endl;
}
}