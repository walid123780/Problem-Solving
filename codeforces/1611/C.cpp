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
        int arr[n+1],cntt=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==n)
        {
            reverse(arr,arr+n);
        }
        else if(arr[n-1]==n)
        {
            reverse(arr,arr+n);
        }
        else
        {
            cout<<"-1"<<endl;
            cntt++;
        }
        if(cntt==0)
        {
            for(int i=0; i<n-1; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<arr[n-1]<<endl;
        }


    }

    return 0;
}
