#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    int x = n % a;
    int y = m % a;
    long long ans=1;
    long long an=1;
    if(n==a && m==a)
    {
        cout<<"1"<<endl;
    }
    else if(n<=a && m<=a){
        cout<<"1"<<endl;
    }
    else
    {
        if(x)
        {
            ans=n/a;
            ans+=1;
        }
        else if(n!=a) ans=n/a;
        if(y)
        {
            an=m/a;
            an+=1;
        }
        else if(m!=a)an=m/a;
        cout<<ans*an<<endl;
    }

    return 0;
}
