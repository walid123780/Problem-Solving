#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl             "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool sortbysec(const pair<int,int>&a, const pair<int,int>&b)
{
    return (a.second < b.second);
}
int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pii> v;
        for(int  i = 0 ; i < n ; i++)
        {
            int a,b;
            cin>>a>>b;
            v.pb(make_pair(a,b));
        }
        sort(v.begin(),v.end(),sortbysec);
        int arr[n+1] ={0};
        for(int i  = 0 ; i  < n ; i++)
        {
            if(v[i].first == v[i].second)
            {
                arr[v[i].first] = 1;
                cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].second<<endl;
            }
            else
            {
                cout<<v[i].first<<" "<<v[i].second<<" ";
                for(int j  = v[i].first ; j  <= v[i].second ; j++)
                    if(arr[j] == 0)
                    {
                        cout<<j<<endl;
                        arr[j] = 1;
                        break;
                    }
            }
        }

    }
    return 0;
}
