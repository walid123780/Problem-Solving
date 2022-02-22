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
        int arr[n+1]= {0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=1; i<n-1; i++)
        {
            if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
            {
                if(arr[i+2]>arr[i])
                {
                    arr[i+1]=arr[i+2];
                    cnt++;
                }
                else
                {
                    arr[i+1]=arr[i];
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
