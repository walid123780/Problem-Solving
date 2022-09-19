#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    rep(i,n)mp[s[i]]++;
    char ch = 'x';
    char ch1 = 'X';

    if(mp[ch] == mp[ch1])
    {
        cout<<"0\n";
        cout<<s;
    }
    else if(mp[ch] > n / 2)
    {
        cout<<mp[ch] - n / 2<<"\n";
        int y = mp[ch] - n / 2;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'x' && y != 0)
            {
                cout<<"X";
                y--;

            }
            else cout<<s[i];
        }
    }
    else if(n/2 < mp[ch1])
    {
        cout<<mp[ch1] - n / 2<<"\n";
        int y = mp[ch1] - n / 2;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'X' && y != 0)
            {
                cout<<"x";
                y--;

            }
            else cout<<s[i];
        }
    }
    return 0;
}
