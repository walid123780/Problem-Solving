#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>0 && b>0)
        {
            b=b*2;
            int temp=a+b;
            temp+=1;
            cout<<temp<<endl;
        }
        else  if(a==0 && b>0 || a==0 && b==0)
        {
            cout<<"1"<<endl;
        }
        else if(a>0 && b==0)
        {
            cout<<a+1<<endl;
        }
    }
    return 0;
}
