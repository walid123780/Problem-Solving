#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        double d;
        cin>>d;
        double x = sqrt((d*d) - 4.0 * d);
        double a = (d + x) / 2.0 ;
        double b = (d - x) / 2.0 ;
        if(d == 1 || d == 2 || d == 3)
        {
            cout<<"N\n";
        }
        else
        {
            cout<<"Y\n";
            printf("%.10f %.10f\n",a,b);
        }
    }
    return 0;
}
