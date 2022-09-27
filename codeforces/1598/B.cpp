#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int  main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k = n / 2;
        int arr[n+1][6];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <5; j++)
            {
                cin>>arr[i][j];
            }
        }
        bool found = false;
        for(int i = 0 ; i < 5; i++)
        {
            for(int j =  i + 1 ; j < 5; j++)
            {
                int d1 = 0, d2 = 0, d3 = 0;
                for(int k = 0; k < n ; k++)
                {
                    if(arr[k][i] && arr[k][j]) d3++;
                    else if(arr[k][i])d1++;
                    else if(arr[k][j])d2++;
                }
                if(d1 + d2 + d3 ==  n && d1 <= n/2 && d2 <= n / 2)
                {
                    found = true;
                }
            }
        }
        cout<<(found ? "YES" : "NO")<<endl;
    }
    return 0;
}



