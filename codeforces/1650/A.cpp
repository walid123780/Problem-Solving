#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len =s.size();
        char ch;
        cin>>ch;
        int l=0,pos=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]==ch && i%2==0)
            {
                l=1;
                pos=i;
                break;
            }
        }
        if(l==1 && len%2!=0 && pos%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
