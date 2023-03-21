#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n + 1] = {0};
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i-1];
        }
        int l = 1, r = n, ans = 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            cout << "? " <<  mid;
            for(int i = 1; i <= mid; i++)
            {
                cout << " " << i;
            }
            cout << "\n";
            cout.flush();
            long long s ;
            cin >> s;
            if(s > a[mid])
            {
                r = mid - 1;
                ans = mid;
            }
            else l = mid + 1;
        }
        cout << "! " << ans << "\n";
        cout.flush();
    }
    return 0;
}
