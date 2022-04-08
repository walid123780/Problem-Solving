#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s,m,x;

         int l=1,j=0,pos=0;
        int check[26]={0};
        cin>>s;
        int len=s.size();
        x=s;
        sort(x.begin(),x.end());
        for(int i=0; i<len-1; i++)
        {
            if(x[i]!=x[i+1]) l++;
        }
        for(int i=len-1; i>=0; i--)
        {
            if(check[s[i]-'a']==0 && l!=0) {
                    pos=i;
                    check[s[i]-'a']=1;
                    l--;
            }
            else if(check[s[i]-'a']==1 && l!=0) {
                   pos=i;
            }
        }
        for(int i=pos;i<len;i++)cout<<s[i];
        cout<<endl;

    }
}
