#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool wins(string s, string t)
{
    if(s == "rock") return t == "scissors";
    if(s == "scissors") return t == "paper";
    if(s == "paper") return t == "rock";

}
int main()
{
    fast;
//    optimize();
    string arr = "FMS";
    vector<string>v(3);
    rep(i,3) cin>>v[i];
    rep(i,3)
    {
        bool ok = true;
        rep(j,3)
        {
            if(i != j)
            {
                if(!wins(v[i],v[j]))
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok == true)
            {
                cout<<arr[i]<<"\n";
                return 0;
            }
    }
    cout<<"?\n";
    return 0;
}
