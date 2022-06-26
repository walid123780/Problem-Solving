#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define SIZE 10000
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool flag=false;
        cin>>n;
        int a[n+1],b[n+1],x[n+1],output[SIZE],cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            x[i]=b[i];
        }
        sort(x,x+n);
        //sort(y,y+n);
        int i,l=0;
        for(i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    output[l++]=j;
                    output[l++]=i;
                    swap(b[i],b[j]);
                    cnt++;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]==a[j] && b[i]>b[j])
                {
                    swap(b[i],b[j]);
                    cnt++;
                    output[l++]=j;
                    output[l++]=i;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(x[i]!=b[i])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)cout<<"-1"<<endl;
        else
        {
            cout<<cnt<<endl;
            int pop=0;
            for(int i=0; i<l; i++)
            {
                cout<<output[i]+1<<" ";
                pop++;
                if(pop==2)
                {
                    pop=0;
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}

