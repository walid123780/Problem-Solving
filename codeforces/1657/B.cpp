

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long  a,b,c,d;
        cin>>a>>b>>c>>d;
        long long  cpp=0,dpp=0;
        long long x=0;

        cpp=cpp-d;
        dpp=dpp+c;
        for(int i=1; i<=a; i++)
        {
            if(dpp<=b)
            {

                x=x+dpp;
                cpp=dpp-d;
                dpp=dpp+c;

            }
            else if(cpp<b)
            {

                x=x+cpp;
                dpp=cpp+c;
                cpp=cpp-d;

            }

        }
        cout<<x<<endl;

    }
}
