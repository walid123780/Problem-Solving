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
        char fuck[10];
        int so=0,mm=0,ans=0,l=0;
        for(int i=0; i<6; i++)
        {
            if(s[i]=='r'||s[i]=='b'||s[i]=='g')
            {
               fuck[l++]=s[i];
               so++;
            }
            if(s[i]=='R' || s[i]=='B'|| s[i]=='G'){
                for(int j=0;j<so;j++){
                    if(s[i]==fuck[j]-32){
                        mm++;
                    }
                    else ans++;
                }
            }
        }

     if(mm==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
