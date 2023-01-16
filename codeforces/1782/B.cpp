#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,cnt = 1, f = 0 ;
        cin>>n;
        vector<int > v(n);
        for(int i =0 ; i <  n; i++)
        {
            cin>>v[i];
            if(v[i] == 0) f = 1;
        }
        sort(v.begin(), v.end());
        if(!f) cnt++ ;
        for(int i = 1; i < n ; i++)
        {
            if(v[i-1] < i && v[i] >= i+1) cnt++;
        }
        cout<<cnt<<endl;
    }
}
