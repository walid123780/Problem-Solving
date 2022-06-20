#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,pre=11,post=1,carry=0,red=9;
        cin>>n;
        string s,palindrome="";
        cin>>s;
        if(s[0]=='9')
        {
            for(int i=n-1; i>=0; i--)
            {
                int value=s[i]-'0';
                if(value>1)
                {
                    carry=pre-value;
                    int x=s[i-1]-'0';
                    x=x+1;
                    s[i-1]=x+'0';
                }
                else if(value<=1)carry =post-value;

                palindrome+=carry+'0';

            }
        }
        else if(s[0]!='9'){
            for(int i=n-1;i>=0;i--){
                int value=s[i]-'0';
                carry=red-value;
                palindrome+=carry+'0';
            }
        }
        reverse(palindrome.begin(),palindrome.end());
        cout<<palindrome<<endl;
    }
    return 0;
}

