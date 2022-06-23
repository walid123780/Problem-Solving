#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN -100000
#define MAX 100000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,temp=MAX;
        cin>>n;
        int arr[n+2];
        bool Mike=false,Joe =false;
        for(int i=1; i<=n; i++)cin>>arr[i];
        if(n%2!=0) cout<<"Mike\n";
        else if(n%2==0)
        {
            /*for(int i=n; ; )
            {
                int j=(i%n)+1;
                if(j+1==n) break;
                if(arr[i]>=arr[j])
                {
                    if(arr[j]<temp)
                    {
                        temp=arr[j];
                        Joe=false;
                        Mike=true;
                    }
                }
                else if(arr[i]<arr[j])
                {
                    if(arr[i]<temp)
                    {
                        temp=arr[i];
                        Mike = false;
                        Joe=true;
                    }
                }
                cout<<j<<endl;
                i=j+1;

            }

            */
            int x=*min_element(arr+1,arr+n+1);

            for(int i=1; i<=n; i++)
            {
                arr[i]=arr[i]-x;
            }
            for(int i=1; i<=n; i++)
            {
                if(arr[i]==0)
                {
                    if(i%2==0)cout<<"Mike\n";
                    else cout<<"Joe\n";
                    break;
                }
            }

        }
    }

    return 0;
}
