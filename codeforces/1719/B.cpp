#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()

int main()
{

    fast;
//  optimize();

    ll t;
    cin>>t;
    while(t--)
    {

        int a,k, red = 0 ;
        cin>>a>>k;
        vector<pii>v;
        for(int i = 1; i <= a; i+=2)
        {
            if(((i + k) * (i+1))% 4 == 0) v.push_back(make_pair(i,i+1));
            else if((((i+1) + k) * i)% 4 == 0) v.push_back(make_pair(i+1,i));
            else
            {
                cout<<"NO\n";
                red =  1;
                break;
            }
        }
        if(red == 0)
        {
            cout<<"YES\n";
            for(int i = 0; i< a/2; i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }


    }
    return 0;
}
