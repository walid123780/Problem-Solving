#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN -100000

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n/3;

        int a=x,b=x,c=x;
        int y=n%3;

        if(y==0){
            b=b+1;
            c=c-1;
        }
        else if(y==2)
        {
            a=a+1;
            b=b+1;
            if(a==b)
            {
                b=b+1;
                c=c-1;
            }
        }
        else if(y=1)
        {
            b=b+1;
            if(a==c)
            {
                b=b+1;
                c=c-1;
            }
        }

       cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
