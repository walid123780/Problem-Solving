
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1],check[n+1]= {0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int cnt=0,cc=n,pos=0;
    while(1)
    {
        for(int i=1; i<=n; i++)
        {
            if(arr[i]-m<=0 && check[i]==0)
            {
                cnt++;
                check[i]=1;
                         pos=i;
            }
            else if(arr[i]-m>0)
            {
                arr[i]=arr[i]-m;
            }
        }
        if(cnt==n)
            break;
    }


    /*int i=1;
    for( ; i<=n; i++)
    {
        if(arr[i]-m<=0 && check[i]==0)
        {
            cnt++;
            check[i]=1;
            pos=i;
        }
        else if(arr[i]-m>0)
        {
            arr[i]=arr[i]-m;
            cout<<i<<" :"<<arr[i]<<endl;
        }

        if(i==n && cnt!=cc)
        {
            i=1;
            cc=cc-cnt;
            cnt=0;
        }
        else if(cnt==cc) break;
    }*/
    cout<<pos<<endl;
    return 0;
}
