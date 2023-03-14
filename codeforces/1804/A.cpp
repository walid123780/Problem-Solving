#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        n = abs(n);
        m = abs(m);
        if(n < m) swap(n , m);
        if(n == m) cout << n * 2 << endl;
        else cout <<(n * 2) - 1 << endl;
    }
    return 0;
}
