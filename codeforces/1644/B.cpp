#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n;
        m=n;
        if(n==3){
            cout<<"1 3 2"<<endl<<"2 3 1"<<endl<<"3 2 1"<<endl;
        }
        else
        for(int i=n; i>=1; i--)
        {

            for(int j=i; j>=1; j--)
            {
                cout<<j<<" ";
            }
            int l=0;
               for( l=n; l>i+1; l--)
            {
                cout<<l<<" ";
            }
            if(m==i) cout<<endl;
            else cout<<l<<endl;
        }
    }
}
