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
        int a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int c=1,d=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                c++;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==0&& a[i+1]==0)
            {d++;

            }
            if(a[i]==1 && a[i+1]==1)
            {
                c+=4;
            }
        }
        if(d>0)cout<<"-1"<<endl;

        else cout<<c<<endl;
    }




    return 0;
}
