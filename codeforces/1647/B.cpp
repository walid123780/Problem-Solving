#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,fuck=0;
        cin>>a>>b;
        string s[a];
        int cnt=0,c=0,finale=0;
        int coun[101];
        for(int i=0; i<a; i++)
        {
            cin>>s[i];
        }
        for(int  i=0; i<a-1; i++)
        {

            for(int j=0; j<b-1; j++)
            {

                cnt=s[i][j]-'0'+s[i+1][j]-'0'+s[i][j+1]-'0'+s[i+1][j+1]-'0';
                if(cnt==3)finale=1;
            }

        }
        if(finale==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
