#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define cmp(i,n)       for(int i=1;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int a, j = 1, x = 0;
        cin>>a;
        int cnt = 0 , l = 0;
        int arr[10];
        while(a != 0)
        {
            j *= 10;
            x = a % j;
            a /= j;
//            cout<<a<<endl;
            a *= j;
//            cout<<a<<endl;
            if(x > 0)
            {
                cnt++;
                arr[l++] = x;
            }

        }
        cout<<cnt<<"\n";
        for(int i = 0; i < cnt; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
