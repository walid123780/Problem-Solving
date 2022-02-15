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
        int arr[n+12];
        for(int i = 1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int found=0;
        int rev=0;
        for(int j=1; j<=n; j++)
        {
            if(arr[j]!=j&& found==0)
            {
                found=j;
            }
            if(found == arr[j])
            {
                rev=j;
                break;
            }
        }
        reverse(arr + found, arr + rev + 1);
        for(int i=1; i<=n; i++)
        {
           cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
