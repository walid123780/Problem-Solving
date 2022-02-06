#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,p;
        cin>>s;
        p=s;
        reverse(s.begin(), s.end());
        int cnt=0;
        if(m==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if(s!=p)
            {
                cout<<"2"<<endl;
            }
            else cout<<"1"<<endl;
        }
    }
    return 0;
}
