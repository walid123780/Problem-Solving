#include<bits/stdc++.h>
using namespace std;
bool check(vector <int >arr,int x)
{
    int n=arr.size();
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]==x)i++;
        else if(arr[j]==x)j--;
        else if(arr[i]!=arr[j])return 0;
        else
            i++,j--;
    }
    return 1;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];

        bool flag=1;
        for(int in=0; in<n-1-in; ++in)
        {
            if(arr[in]!=arr[n-1-in])
            {
                flag = check(arr,arr[in]) or check(arr,arr[n-1-in]);
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
