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
        int n, one = 0, zero = 0 , j = 0;
        cin >> n;
        vector< int > v(n);
        for(int i =0 ; i < n ; i++){
            cin >> v[i];
            if(v[i] == 1) one += 1;
            else if(v[i] == 0) zero += 1;
            else j = 1;
        }
        int f = n - zero;
        zero -= 1;
        if(f >= zero){
            cout << 0 << endl;
        }
        else if(j || !one) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}