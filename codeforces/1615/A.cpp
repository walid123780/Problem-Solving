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
        int a[n+1];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%n!=0){
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;

    }
    return 0;
}
