#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)cout<<"1"<<endl;
        else
        {
            for(int i=2; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<n+1<<endl;
        }
    }
    return 0;
}
