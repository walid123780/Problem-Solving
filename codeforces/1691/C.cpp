#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int first=0,last=0,ans=0;
        bool ok=false;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1' && ok==false)
            {
                first=i;
                ok =true;
            }
            if(s[i]=='1')
            {
                last=i;

            }

        }
        //cout<<first<<endl;
        //cout<<last<<endl;
        if((n-1)-last<=k)
        {
            swap(s[n-1],s[last]);
            k=k-((n-1)-last);
        }
        if(first<=k && first!=n-1)
        {
            swap(s[first],s[0]);
            k=k-first;
        }
        //cout<<s<<endl;
        for(int i=0; i<n-1 ; i++)
        {
            if(s[i]=='0' && s[i+1]=='1')ans=ans+1;
            else if(s[i]=='1' && s[i+1]=='0')ans=ans+10;
            else if(s[i]=='1' && s[i+1]=='1')ans=ans+11;
        }
       cout<<ans<<endl;
    }
    return 0;
}
