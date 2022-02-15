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
        int len=s.size();

        char rev[100],flag[100];
        if(len%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0; i<len/2; i++)
            {
                rev[i]=s[i];
            }
            int l=0;
            for(int j=len/2; j<len; j++)
            {
                flag[l]=s[j];
                l++;
            }
            int cc=0;
            for(int i=0;i<len/2;i++)
            {
                if(rev[i]==flag[i]){
                    cc++;
                }

            }
            if(cc==len/2){
                 cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
