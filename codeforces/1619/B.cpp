#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int cnt=0;
        for(long long i=2; i<=a; i++)
        {
            if(i*i<=a)
            {
                cnt++;

            }
            if(i*i*i<=a)
            {
                cnt++;
                int c=1;
                for(int j=i; c<=i*i*i; j++)
                {
                    c=j*j;
                    if(c==i*i*i)
                    {
                        cnt--;

                    }
                }
            }
            else if(i*i>a)
            {
                break;
            }
        }
        cout<<cnt+1<<endl;
    }

}
