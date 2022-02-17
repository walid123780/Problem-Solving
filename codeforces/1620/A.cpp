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
        int cnt=0,n=0;

        for(int i=0; i<len; i++)
        {
            if(s[i]=='N'){
                n++;
            }
        }
        if(n==1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;


    }

    return 0;
}
