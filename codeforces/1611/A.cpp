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
        int i=-1,cnt=0,m=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]%2==0) cnt++;
        }
        if(cnt<1) cout<<"-1"<<endl;
        else if(s[len-1]%2==0)cout<<"0"<<endl;
        else if(s[0]%2==0)cout<<"1"<<endl;
        else cout<<"2"<<endl;
        /*else
        {
            while(len--)
            {

                if(s[++i]%2==0)
                {
                    cnt++;
                }
                if(cnt>0){

                }
            }
            if(m>0)cout<<cnt<<endl;
            else cout<<"-1"<<endl;
        }*/

    }
}
