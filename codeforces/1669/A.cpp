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
         //int arr[n+1];
         //for(int i=0;i<n;i++)
           // cin>>arr[i];
         //}
         if(n>=1900) cout<<"Division 1"<<endl;
         else if(n>=1600 && n<=1899) cout<<"Division 2"<<endl;
         else if(n>=1400 && n<=1599)cout<<"Division 3"<<endl;
         else cout<<"Division 4"<<endl;

    }




}
