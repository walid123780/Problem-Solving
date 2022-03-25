#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b,c,d;
        cin>>n>>m;
        int arr[n+1];
        map<long long,long long >mp;
        bool ok =false;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(mp.find(arr[i]-m) != mp.end())
            {
                ok = true;
                break;
            }

        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}

