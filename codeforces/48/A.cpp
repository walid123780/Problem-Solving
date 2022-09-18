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

int main()
{
    fast;
//    optimize();
    char arr[] = {'F','M','S'};
    pii s[3];
    cin>>s[0].first>>s[1].first>>s[2].first;
    s[0].second = 0;
    s[1].second = 1;
    s[2].second = 2;
    sort(s,s+3);
    if(s[0].first  == s[1].first  && s[2].first  != s[0].first )
    {
        if(s[2].first == "rock" && s[0].first  == "scissors")
        {
            cout<<arr[s[2].second]<<endl;
            return 0;
        }
        else if(s[2].first  == "paper" && s[0].first  == "rock")
        {
            cout<<arr[s[2].second]<<endl;
            return 0;
        }
        else if(s[2].first  == "scissors" && s[0].first  == "paper")
        {
            cout<<arr[s[2].second]<<endl;
            return 0;
        }
        else cout<<"?\n";
    }
    else if(s[2].first  == s[1].first  && s[2].first  != s[0].first )
    {
        if(s[0].first  == "rock" && s[2].first  == "scissors")
        {
            cout<<arr[s[0].second]<<endl;
            return 0;
        }
        else if(s[0].first  == "paper" && s[2].first  == "rock")
        {
            cout<<arr[s[0].second]<<endl;
            return 0;
        }
        else if(s[0].first  == "scissors" && s[2].first  == "paper")
        {
            cout<<arr[s[0].second]<<endl;
            return 0;
        }
        else cout<<"?\n";
    }
    else cout<<"?\n";
    return 0;
}
