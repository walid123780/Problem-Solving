#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long ans=0;
        long long sum=n/m;
        for(int i=1; i<=10; i++)
        {
            long long fuck=i*m;
            fuck=fuck%10;
            ans=ans+fuck;
            fuck=0;
        }
        long long fuckxxx=sum/10;
        long long ifuckdiv3c=ans*fuckxxx;
        sum=sum%10;
        for(int i=1; i<=sum; i++)
        {
            long long lutha_i_am=i*m;
            lutha_i_am=lutha_i_am%10;
            ifuckdiv3c=ifuckdiv3c+lutha_i_am;
            lutha_i_am=0;
        }
        cout<<ifuckdiv3c<<endl;
    }
    return 0;
}
