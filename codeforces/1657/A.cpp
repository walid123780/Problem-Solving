
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
        a= pow(a,2);
        b= pow(b,2);
        int x=a+b;
        double y=sqrt(x);
        int z=sqrt(x);
        double fuck=y-z;

        if(a==0 && b==0)cout<<"0"<<endl;
        else if(fuck==0)cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}
