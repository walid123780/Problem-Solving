#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=1; i<n-1; )
        {
            if(arr[i-1]+arr[i+1]<arr[i])
            {
                cnt++;
                i+=2;
            }
            else if(arr[i-1]+arr[i+1]>=arr[i])
            {
                if(k==1)
                {
                    cnt++;
                    i+=2;
                }
                else i++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
