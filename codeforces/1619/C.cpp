#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        char s[100];
        cin>>a>>b;
        int j=0;
        bool ok=false;
        while(a)
        {
            long long m=a%10;
            long long n=b%10;
            a=a/10;
            b=b/10;
            if(m>n)
            {
                for(int i=0; i<=9; i++)
                {
                    if((m+i)%10==n)
                    {
                        s[j++]=i;
                        long long nxt = (m + i) / 10;
                        if(b%10!=nxt)
                        {
                            cout<< "-1";
                            ok=true;
                        }
                        b=b/10;
                        break;
                    }
                }
            }
            else
            {
                s[j++]=abs(n-m);
            }
            if(ok){
                break;
            }
        }
        if(!ok)
            while(b)
            {

                s[j++]=(b%10);
                b/=10;
            }
        bool se=false;
        if(!ok)
            for(int e=j-1; e>=0; e--)
            {
                if(s[e]+48>'0' || se)
                {
                    printf("%c",s[e]+48);
                    se=true ;
                }
            }
        cout<<endl;
    }
    return 0;
}
