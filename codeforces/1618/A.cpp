#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int arr[8];
    while(t--)
    {
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+7);
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-(arr[0]+arr[1])<<endl;
    }
    return 0;
}
