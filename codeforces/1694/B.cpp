#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,sum=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-1; i>0; i--)
        {
            if(s[i]!=s[i-1])
            {
                cnt++;
                sum+=cnt;
            }
            else if(s[i]==s[i-1]){
                sum+=cnt;
            }

        }
        cout<<sum+n<<endl;

    }
    return 0;
}

