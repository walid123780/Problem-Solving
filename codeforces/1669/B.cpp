#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int cnt=0,value=0;
        for(int i=0; i<n-1; i++)
        {

            if(cnt==2) break;
            if(arr[i]==arr[i+1])
            {
                cnt++;
                if(cnt==2) value=arr[i];
            }
            else if(arr[i]!=arr[i+1]) cnt=0;
        }
        if(value==0)cout<<"-1"<<endl;
        else cout<<value<<endl;
    }




}

