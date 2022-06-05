#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int arr[n+10],cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0) cnt++;
            else ans++;

        }
        cout<<min(ans,cnt)<<endl;
    }
    return 0;
}
