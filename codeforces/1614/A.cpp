#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        long long n,l,r,k;
        cin>>n>>l>>r>>k;
        int arr[n+1],c=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=r && arr[i]>=l && k>=arr[i])
            {
                c++;
                k=k-arr[i];
            }
        }
        cout<<c<<endl;
    }
}
