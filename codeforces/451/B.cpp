#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n+2],ary[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        ary[i]=arr[i];
    }
    int m=arr[1];
    bool ok=false;
    int pos=1,pos2=1;
    int flag=0;
    sort(ary+1,ary+n+1);

    for(int i=1; i<=n; i++)
    {
        if(ary[i]!=arr[i] && ok==false)
        {
            pos=i;
            ok=true;
        }
        if(arr[i]==ary[pos] &&  ok==true)
        {
            pos2=i;
            break;
        }
    }
    reverse(arr+pos,arr+pos2+1);
    for(int i=1; i<=n; i++)
    {
        if(arr[i]!=ary[i])
        {
            flag=1;
            break;
        }
    }
    if(flag == 1) cout<<"no"<<endl;
    else cout<<"yes"<<endl<<pos<< " "<<pos2<<endl;


}
