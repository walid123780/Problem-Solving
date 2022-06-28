#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
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
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=0; j<n; j++)
            {
                if(j==i) continue;
                sum = sum ^ arr[j];
            }
            if(sum==arr[i])
            {
                cout<<sum<<endl;
                break;
            }
        }
    }

    return 0;
}
