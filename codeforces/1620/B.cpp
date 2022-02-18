#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        cin>>w>>h;
        int a;
        cin>>a;
        long long xd[a+1];
        for(int i=0; i<a; i++)
            cin>>xd[i];
        long long serious=xd[a-1]-xd[0];
        int b;
        cin>>b;
        long long xup[b+1];
        for(int j=0; j<b; j++)
            cin>>xup[j];
        long long hard= xup[b-1]-xup[0];
        int e;
        cin>>e;
        long long yd[e+1];
        for(int i=0; i<e; i++)
            cin>>yd[i];
        long long lame=yd[e-1]-yd[0];
        int f;
        cin>>f;
        long long yup[f+1];
        for(int j=0; j<f; j++)
            cin>>yup[j];
        long long  shut_up =yup[f-1]-yup[0];
        long long ans=0;
        ans=max(ans,(serious*h));
        ans=max(ans,(hard*h));
        ans=max(ans,(lame*w));
        ans=max(ans,(shut_up*w));
        cout<<ans<<endl;
    }
    return 0;
}
