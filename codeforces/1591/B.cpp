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
        int l=0,c=0;
        int x=a[n-1];
        for(int i=n-1; i>=0; i--)
        {
            if(x<a[i])
            {
                c++;
                x=a[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
