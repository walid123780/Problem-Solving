///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>=1;i--)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);



#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long  t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l=0,arr[1003],j=1,d=1000;
        if(n>19) cout<<"NO"<<endl;
        else
        {
            for(int i=1; i<=n; i++)
            {
                arr[l++]=j;
                j=j*3;
            }
            cout<<"YES"<<endl;
            for(int i=0; i<l-1; i++)
            {
                cout<<arr[i]<< " ";
            }
            cout<<arr[l-1]<<endl;
        }

    }
    return 0;
}
