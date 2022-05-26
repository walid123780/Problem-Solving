#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int ans=MAX;
        if(len==2) cout<<s[1]<<endl;
        else
        {
            for(int i=0; s[i]!='\0'; i++)
            {
                if(s[i]-48<ans)
                {
                    ans=s[i]-48;
                }
            }
             cout<<ans<<endl;
        }

    }
    return 0;
}
