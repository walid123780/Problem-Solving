#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        int n;
        cin>>n;

        int arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1 && arr[0]==1) cout<<"YES"<<endl;
        else if(n==1 && arr[0]!=1) cout<<"NO"<<endl;
        else
        {
            sort(arr, arr + n, greater<int>());

            if(arr[0]-arr[1]<=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

