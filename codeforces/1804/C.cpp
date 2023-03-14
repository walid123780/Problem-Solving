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
        int n, x, p;
        cin >> n >> x >> p;
        int ok = 1;
        for(int i = 1; i <= min(p, 2 * n); i++)
        {
            long long f = i;
            long long  seuu = (f * (f + 1)) / 2;
            if((seuu + x) % n == 0)
            {
                cout << "YES" <<endl;
                ok = 0;
                break;
            }

        }
        if(ok) cout <<"NO" <<endl;
    }
    return 0;
}
